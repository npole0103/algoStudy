//#include <iostream> //2017203035 SuHeonKim
//#include <algorithm>
//#include <vector>
//#include <string>
//using namespace std;
//
////Programming Language : C++
////Compiler : MSVC, Microsoft Visual C++
//
///*
//	700대 값부터는 메모리를 많이 잡아먹기 때문에, 프로세스, 메모리 클린 유틸 한번 실행해주고 하면 잘됨
//	메모리가 부족하면 에러가 뜰 때가 있는데, 메모리 여유 공간이 많으면 실행 잘 됨.
//*/
//
////flag가 true라면 NUMEROUS
////limt 값 초과시 NUMEROUS\n
//const long long limit = 4294967295; //2^32 - 1
//bool flag = false;
//
////배열 요소 추적해주는 함수
//void backTrackingDp(long long** T, int arr[], int n, int total);
//
////같은 셋이 없으면 0 출력
//vector<int> leftArr;
//vector<int> rightArr;
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
//
//long long subsetCount(int arr[], int length, int total)
//{
//	try
//	{
//		//메모리 해제하기 위해서 ans에 저장
//		long long ans = 0;
//
//		//2차원 배열 동적 할당 heap
//		long long** T = new long long* [length + 1];
//		for (int i = 0; i < length + 1; i++)
//			T[i] = new long long[total + 1];
//		
//		////배열 전체 초기화 - 굳이 할 필요 없음. 할당하면 전부 0으로 초기화 되기 때문
//		//for (int i = 1; i <= length; i++) {
//		//	for (int j = 1; j <= total; j++) {
//		//		T[i][j] = 0;
//		//	}
//		//}
//
//		//첫번째 열에 1 값 대입
//		for (int i = 0; i <= length; i++)
//			T[i][0] = 1;
//
//		//첫번째 행에 0 값 대입
//		for (int i = 1; i <= total; i++)
//			T[0][i] = 0;
//
//		//Dp fill-up
//		for (int i = 1; i <= length; i++) 
//		{
//			for (int j = 1; j <= total; j++) 
//			{
//
//				if (j - arr[i - 1] >= 0)
//				{
//					T[i][j] = T[i - 1][j - arr[i - 1]] + T[i - 1][j]; //T[i][j] 값 업데이트 arr[i-1] 배열에 있는 수를 총합에서 빼준 카운트
//				}
//				else
//					T[i][j] = T[i - 1][j];
//
//				if (T[i][j] / 2 > limit) //NUMEROUS 예외 처리
//					flag = true;
//			}
//		}
//
//		backTrackingDp(T, arr, length, total); //백트래킹으로 부분수열 벡터에 저장
//
//		ans = T[length][total] / 2;
//
//		//메모리 해제
//		for (int i = 0; i < length + 1; i++)
//			delete[] T[i];
//		delete[] T;
//
//		return ans;
//	}
//	catch (exception e) //컴퓨터 메모리 공간 부족으로 예외가 뜰 경우
//	{
//		cout << "메모리 부족! 메모리 클린 후 다시 시도해주세요." << endl;
//		cerr << e.what() << endl;
//	}
//
//}
//
//void backTrackingDp(long long** T, int arr[], int n, int total)
//{
//	if (n == 0)
//		return;
//
//	if (T[n][total] != 0) //부분 집합이라면
//	{
//		if (T[n - 1][total] == 0) //이전 값 0이라면
//		{
//			leftArr.push_back(arr[n - 1]);
//			backTrackingDp(T, arr, n - 1, total - arr[n - 1]);
//		}
//		else
//			backTrackingDp(T, arr, n - 1, total);
//	}
//	else
//		backTrackingDp(T, arr, n, total - 1);
//}
//
//int main()
//{
//	string num;
//	int total = 0;
//	long long ans = 0;
//
//	//for (int i = 1; i <= 1000; i++)
//	//	cout << i << " ";
//	//cout << endl;
//
//	while (1)
//	{
//		cin >> num;
//
//		if (num == "EOI")
//			break;
//
//		int n = stoi(num);
//		int* arr = new int[n + 1];
//
//		for (int i = 0; i < n; i++)
//		{
//			cin >> arr[i];
//			total += arr[i];
//			allArr.push_back(arr[i]);
//		}
//
//		if (total % 2 != 0) //배열의 총 합이 2로 나누어 떨어지지 않는다면, 파티션 될 수 없음 0출력
//		{
//			cout << "0" << endl;
//			allArr.clear();
//			total = 0;
//			delete arr;
//			continue;
//		}
//
//		//Sorting & subsetCount() 실행
//		sort(arr, arr + n);
//		ans = subsetCount(arr, n, total / 2);
//
//		//Result
//		if (ans == 0) //2로 나눠지는 집합 중에 카운트 할 수 없는 집합, ex) {2, 4, 8, 12}
//		{
//			cout << "0" << endl;
//		}
//		else if(flag == true) //2^32 - 1 초과하는 값이라면
//		{
//			cout << "NUMEROUS" << endl;
//			printSubset();
//		}
//		else  // 2^32 - 1 값 범위 안에 있다면  
//		{
//			cout << ans << endl;
//			printSubset();
//		}
//
//		//전역/지역 변수 초기화
//		leftArr.clear();
//		rightArr.clear();
//		allArr.clear();
//		total = 0;
//		ans = 0;
//		flag = false;
//		delete arr;
//	}
//
//	return 0;
//}