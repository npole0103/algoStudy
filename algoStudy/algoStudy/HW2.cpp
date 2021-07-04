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
//	700�� �����ʹ� �޸𸮸� ���� ��ƸԱ� ������, ���μ���, �޸� Ŭ�� ��ƿ �ѹ� �������ְ� �ϸ� �ߵ�
//	�޸𸮰� �����ϸ� ������ �� ���� �ִµ�, �޸� ���� ������ ������ ���� �� ��.
//*/
//
////flag�� true��� NUMEROUS
////limt �� �ʰ��� NUMEROUS\n
//const long long limit = 4294967295; //2^32 - 1
//bool flag = false;
//
////�迭 ��� �������ִ� �Լ�
//void backTrackingDp(long long** T, int arr[], int n, int total);
//
////���� ���� ������ 0 ���
//vector<int> leftArr;
//vector<int> rightArr;
//vector<int> allArr;
//
////�迭 ������ִ� �Լ�
//void printSubset()
//{
//	//allArr, leftArr ����
//	sort(allArr.begin(), allArr.end());
//	sort(leftArr.begin(), leftArr.end());
//
//	//�������� rightArray�� �߰�
//	vector<int> rightArr(allArr.size() + leftArr.size());
//	auto iter = set_difference(allArr.begin(), allArr.end(), leftArr.begin(), leftArr.end(), rightArr.begin());
//	rightArr.erase(iter, rightArr.end());
//
//	//rightArr ����
//	sort(rightArr.begin(), rightArr.end());
//
//	//���
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
//		//�޸� �����ϱ� ���ؼ� ans�� ����
//		long long ans = 0;
//
//		//2���� �迭 ���� �Ҵ� heap
//		long long** T = new long long* [length + 1];
//		for (int i = 0; i < length + 1; i++)
//			T[i] = new long long[total + 1];
//		
//		////�迭 ��ü �ʱ�ȭ - ���� �� �ʿ� ����. �Ҵ��ϸ� ���� 0���� �ʱ�ȭ �Ǳ� ����
//		//for (int i = 1; i <= length; i++) {
//		//	for (int j = 1; j <= total; j++) {
//		//		T[i][j] = 0;
//		//	}
//		//}
//
//		//ù��° ���� 1 �� ����
//		for (int i = 0; i <= length; i++)
//			T[i][0] = 1;
//
//		//ù��° �࿡ 0 �� ����
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
//					T[i][j] = T[i - 1][j - arr[i - 1]] + T[i - 1][j]; //T[i][j] �� ������Ʈ arr[i-1] �迭�� �ִ� ���� ���տ��� ���� ī��Ʈ
//				}
//				else
//					T[i][j] = T[i - 1][j];
//
//				if (T[i][j] / 2 > limit) //NUMEROUS ���� ó��
//					flag = true;
//			}
//		}
//
//		backTrackingDp(T, arr, length, total); //��Ʈ��ŷ���� �κм��� ���Ϳ� ����
//
//		ans = T[length][total] / 2;
//
//		//�޸� ����
//		for (int i = 0; i < length + 1; i++)
//			delete[] T[i];
//		delete[] T;
//
//		return ans;
//	}
//	catch (exception e) //��ǻ�� �޸� ���� �������� ���ܰ� �� ���
//	{
//		cout << "�޸� ����! �޸� Ŭ�� �� �ٽ� �õ����ּ���." << endl;
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
//	if (T[n][total] != 0) //�κ� �����̶��
//	{
//		if (T[n - 1][total] == 0) //���� �� 0�̶��
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
//		if (total % 2 != 0) //�迭�� �� ���� 2�� ������ �������� �ʴ´ٸ�, ��Ƽ�� �� �� ���� 0���
//		{
//			cout << "0" << endl;
//			allArr.clear();
//			total = 0;
//			delete arr;
//			continue;
//		}
//
//		//Sorting & subsetCount() ����
//		sort(arr, arr + n);
//		ans = subsetCount(arr, n, total / 2);
//
//		//Result
//		if (ans == 0) //2�� �������� ���� �߿� ī��Ʈ �� �� ���� ����, ex) {2, 4, 8, 12}
//		{
//			cout << "0" << endl;
//		}
//		else if(flag == true) //2^32 - 1 �ʰ��ϴ� ���̶��
//		{
//			cout << "NUMEROUS" << endl;
//			printSubset();
//		}
//		else  // 2^32 - 1 �� ���� �ȿ� �ִٸ�  
//		{
//			cout << ans << endl;
//			printSubset();
//		}
//
//		//����/���� ���� �ʱ�ȭ
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