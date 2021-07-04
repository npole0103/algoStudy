//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//using namespace std;
//
//#define MAX 4294967295 //2^32 - 1
//
////MAX시에 NUMEROUS\n
////같은 셋이 없으면 0 출력
//long long ans = 0;
//bool flag;
//vector<int> leftArr;
//vector<int> rightArr;
//int* mark = new int[1001]; //n까지만 사용할 것임
//
////배열 출력해주는 함수
//void printSubset()
//{
//	//left, right Array 정렬
//	sort(leftArr.begin(), leftArr.end());
//	sort(rightArr.begin(), rightArr.end());
//
//	//출력
//	cout << "{ ";
//	for (int i = 0; i < leftArr.size() - 1; i++)
//		cout << leftArr[i] << ", ";
//	cout << leftArr[leftArr.size() - 1] << " }, ";
//
//	cout << "{ ";
//	for (int i = 0; i < rightArr.size() - 1; i++)
//		cout << rightArr[i] << ", ";
//	cout << rightArr[rightArr.size() - 1] << " }" << endl;
//}
//
////재귀적으로 경우의 수 카운팅
//void dfs(int i, int sum, int arr[], int n, int total)
//{
//	//cout << "hihi ";
//	if (sum > (total / 2)) //0부터 더 해가던 배열 값이 total/2보다 더 커진 경우는 더 이상 같은 값이 없는 경우
//		return;
//
//	if (i == n)
//	{
//		if (sum == (total - sum))
//		{
//			if (ans > 2 * MAX || ans == -1) //ans 값이 2*MAX 이상이라면
//			{
//				ans = -1;
//				return;
//			}
//			if (!flag) //한번만 실행되도록 함, 아무 부분 수열 조합 딱 한번만 출력하면 되기 때문
//			{
//				for (int j = 0; j < i; j++)
//				{
//					if (mark[j] != 0) //0이 아닌 값은 left에, 0인 값은 right에 저장
//						leftArr.push_back(arr[j]);
//					else
//						rightArr.push_back(arr[j]);
//				}
//				flag = true; // true를 사용하므로써 한번만 실행되게 해줌
//			}
//			ans += 1; // 경우의 수 카운트
//		}
//	}
//	else
//	{
//		mark[i] = arr[i]; //부분 수열 값으로 mark
//		dfs(i + 1, sum + arr[i], arr, n, total);
//		mark[i] = 0; //부분 수열 0으로 mark
//		dfs(i + 1, sum, arr, n, total);
//	}
//}
//
//int main()
//{
//	string num;
//	int total = 0;
//
//	for (int i = 1; i < 26; i++)
//		cout << i << " ";
//
//	while (1)
//	{
//		cin >> num;
//		if (num == "EOI")
//			break;
//
//		int n = stoi(num);
//		int* arr = new int[n + 1];
//		int* temp = new int[n + 1];
//
//		for (int i = 0; i < n; i++)
//		{
//			cin >> arr[i];
//			total += arr[i];
//		}
//
//		//arr 배열 정렬
//		sort(arr, arr + n);
//
//		//재귀 함수 실행
//		dfs(0, 0, arr, n, total);
//
//		//카운트 출력
//		if (ans == -1) // -1이라면
//			cout << "NUMEROUS" << endl;
//		else if (ans == 0)
//			cout << "0" << endl;
//		else
//		{
//			cout << ans / 2 << endl;
//			
//			//배열 출력 함수 실행
//			printSubset();
//		}
//
//		//전역/지역 변수 초기화
//		leftArr.clear();
//		rightArr.clear();
//		ans = 0;
//		flag = false;
//		total = 0;
//		delete arr;
//	}
//
//	return 0;
//}