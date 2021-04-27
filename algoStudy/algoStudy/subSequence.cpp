#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

#define MAX 4294967295 //2^32 - 1

//MAX시에 NUMEROUS\n
//같은 셋이 없으면 0 출력
long long ans = 0;
bool flag;
vector<int> leftArr;
vector<int> rightArr;

//배열 출력해주는 함수

//경우의 수 구해주는 함수
void dfs(int i, int sum, int arr[], int n, int total)
{
	if (sum > (total / 2)) //0부터 더 해가던 배열 값이 total/2보다 더 커진 경우는 더 이상 같은 값이 없는 경우
		return;

	if (i == n)
	{
		if (sum == (total - sum))
		{
			ans += 1;
		}
	}
	else
	{
		dfs(i + 1, sum + arr[i], arr, n, total);
		dfs(i + 1, sum, arr, n, total);
	}
}

int main()
{
	string num;
	
	int total = 0;

	while (1)
	{

		cin >> num;
		if (num == "EOI")
			break;

		int n = stoi(num);
		int* arr = new int[n + 1];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			total += arr[i];
		}
		sort(arr, arr + n);

		//배열값 출력문
		cout << "n : " << n << ", 배열 값 : ";
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;

		//재귀 실행
		dfs(0, 0, arr, n, total);

		//vector
		cout << "Vector left : ";
		for (int i = 0; i < leftArr.size() ; i++)
			cout << leftArr[i] << " ";
		cout << endl;

		//카운트 출력
		if (ans / 2 > MAX)
			cout << "NUMEROUS" << endl;
		else if (ans == 0)
			cout << "ans is 0" << endl;
		else
			cout << "ans : " << ans / 2 << endl;

		//전역 지역 변수 초기화
		ans = 0;
		flag = false;
		total = 0;
		delete arr;
	}

	return 0;
}