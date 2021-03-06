//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <time.h>
//
//using namespace std;
//
//#define MAX 4294967295 //2^32 - 1
//
////MAX시에 NUMEROUS\n
////같은 셋이 없으면 0 출력
//long long ans = 0;
//bool flag;
//vector<int> leftArr;
//vector<int> allArr;
//
////배열 출력해주는 함수
//void printSubset()
//{
//	//allArr, leftArr 정렬
//	sort(allArr.begin(), allArr.end());
//	sort(leftArr.begin(), leftArr.end());
//
//	//차집합을 rightArray에 추가
//	vector<int> rightArr(allArr.size() + leftArr.size());
//	auto iter = set_difference(allArr.begin(), allArr.end(), leftArr.begin(), leftArr.end(), rightArr.begin());
//	rightArr.erase(iter, rightArr.end());
//
//	//rightArr 정렬
//	sort(rightArr.begin(), rightArr.end());
//
//	//출력
//	cout << "Vector left : ";
//	for (int i = 0; i < leftArr.size(); i++)
//		cout << leftArr[i] << " ";
//	cout << endl;
//
//	cout << "Vector right : ";
//	for (int i = 0; i < rightArr.size(); i++)
//		cout << rightArr[i] << " ";
//	cout << endl;
//}
//
//int* pArr = new int[1001];
//
//void dfs(int i, int sum, int arr[], int n, int total)
//{
//	if (sum > (total / 2)) //0부터 더 해가던 배열 값이 total/2보다 더 커진 경우는 더 이상 같은 값이 없는 경우
//		return;
//
//	if (i == n)
//	{
//		if (sum == (total - sum))
//		{
//			if (!flag) //한번만 실행되도록 함, 아무 부분 수열 조합 딱 한번만 출력하면 되기 때문
//			{
//				for (int j = 0; j < i; j++)
//				{
//					if (pArr[j] != 0)
//						leftArr.push_back(pArr[j]); //부분 수열이 leftArr에 담김.
//				}
//				flag = true; // true를 사용하므로써 다시는 실행되지 않게
//			}
//			ans += 1; // 경우의 수 카운트
//		}
//	}
//	else
//	{
//		pArr[i] = arr[i];
//		dfs(i + 1, sum + arr[i], arr, n, total);
//		pArr[i] = 0;
//		dfs(i + 1, sum, arr, n, total);
//	}
//}
//
//int main()
//{
//	string num;
//	int total = 0;
//
//	while (1)
//	{
//		cin >> num;
//		if (num == "EOI")
//			break;
//
//		time_t start, end;
//
//		start = time(NULL);
//
//		int n = stoi(num);
//		int* arr = new int[n + 1];
//
//		for (int i = 0; i < n; i++)
//		{
//			cin >> arr[i];
//			allArr.push_back(arr[i]);
//			total += arr[i];
//		}
//		sort(arr, arr + n);
//
//		//재귀 함수 실행
//		dfs(0, 0, arr, n, total);
//
//		//카운트 출력
//		if (ans / 2 > MAX) //MAX로직 수정하기
//			cout << "NUMEROUS" << endl;
//		else if (ans == 0)
//			cout << "ans is 0" << endl;
//		else
//			cout << "ans : " << ans / 2 << endl;
//
//		//배열 출력 함수 실행
//		printSubset();
//
//		end = time(NULL);
//
//		cout << "Time : " << (double)(end - start) << endl;
//
//		//전역/지역 변수 초기화
//		while (!leftArr.empty())
//			leftArr.pop_back();
//		while (!allArr.empty())
//			allArr.pop_back();
//		ans = 0;
//		flag = false;
//		total = 0;
//		delete arr;
//	}
//
//	return 0;
//}