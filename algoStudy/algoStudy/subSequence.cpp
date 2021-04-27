#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

#define MAX 4294967295 //2^32 - 1

//MAX�ÿ� NUMEROUS\n
//���� ���� ������ 0 ���
long long ans = 0;
bool flag;
vector<int> leftArr;
vector<int> rightArr;

//�迭 ������ִ� �Լ�

//����� �� �����ִ� �Լ�
void dfs(int i, int sum, int arr[], int n, int total)
{
	if (sum > (total / 2)) //0���� �� �ذ��� �迭 ���� total/2���� �� Ŀ�� ���� �� �̻� ���� ���� ���� ���
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

		//�迭�� ��¹�
		cout << "n : " << n << ", �迭 �� : ";
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;

		//��� ����
		dfs(0, 0, arr, n, total);

		//vector
		cout << "Vector left : ";
		for (int i = 0; i < leftArr.size() ; i++)
			cout << leftArr[i] << " ";
		cout << endl;

		//ī��Ʈ ���
		if (ans / 2 > MAX)
			cout << "NUMEROUS" << endl;
		else if (ans == 0)
			cout << "ans is 0" << endl;
		else
			cout << "ans : " << ans / 2 << endl;

		//���� ���� ���� �ʱ�ȭ
		ans = 0;
		flag = false;
		total = 0;
		delete arr;
	}

	return 0;
}