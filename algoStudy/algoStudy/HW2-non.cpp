//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//using namespace std;
//
//#define MAX 4294967295 //2^32 - 1
//
////MAX�ÿ� NUMEROUS\n
////���� ���� ������ 0 ���
//long long ans = 0;
//bool flag;
//vector<int> leftArr;
//vector<int> rightArr;
//int* mark = new int[1001]; //n������ ����� ����
//
////�迭 ������ִ� �Լ�
//void printSubset()
//{
//	//left, right Array ����
//	sort(leftArr.begin(), leftArr.end());
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
////��������� ����� �� ī����
//void dfs(int i, int sum, int arr[], int n, int total)
//{
//	//cout << "hihi ";
//	if (sum > (total / 2)) //0���� �� �ذ��� �迭 ���� total/2���� �� Ŀ�� ���� �� �̻� ���� ���� ���� ���
//		return;
//
//	if (i == n)
//	{
//		if (sum == (total - sum))
//		{
//			if (ans > 2 * MAX || ans == -1) //ans ���� 2*MAX �̻��̶��
//			{
//				ans = -1;
//				return;
//			}
//			if (!flag) //�ѹ��� ����ǵ��� ��, �ƹ� �κ� ���� ���� �� �ѹ��� ����ϸ� �Ǳ� ����
//			{
//				for (int j = 0; j < i; j++)
//				{
//					if (mark[j] != 0) //0�� �ƴ� ���� left��, 0�� ���� right�� ����
//						leftArr.push_back(arr[j]);
//					else
//						rightArr.push_back(arr[j]);
//				}
//				flag = true; // true�� ����ϹǷν� �ѹ��� ����ǰ� ����
//			}
//			ans += 1; // ����� �� ī��Ʈ
//		}
//	}
//	else
//	{
//		mark[i] = arr[i]; //�κ� ���� ������ mark
//		dfs(i + 1, sum + arr[i], arr, n, total);
//		mark[i] = 0; //�κ� ���� 0���� mark
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
//		//arr �迭 ����
//		sort(arr, arr + n);
//
//		//��� �Լ� ����
//		dfs(0, 0, arr, n, total);
//
//		//ī��Ʈ ���
//		if (ans == -1) // -1�̶��
//			cout << "NUMEROUS" << endl;
//		else if (ans == 0)
//			cout << "0" << endl;
//		else
//		{
//			cout << ans / 2 << endl;
//			
//			//�迭 ��� �Լ� ����
//			printSubset();
//		}
//
//		//����/���� ���� �ʱ�ȭ
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