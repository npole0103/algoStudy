//#include <iostream> //https://dpdpwl.tistory.com/53
//using namespace std;
//
//int arr[1000001]; //�� �迭
//int* arr2; //�ӽ� �迭
//
//void merge(int left, int right)
//{
//	int mid = (left + right) / 2;
//
//	int i = left; // ���� �迭
//	int j = mid + 1; // ������ �迭
//	int k = left; // ����+������ �迭
//
//	while (i <= mid && j <= right) //�� �� �ϳ��� �� ������
//	{
//		if (arr[i] <= arr[j])
//			arr2[k++] = arr[i++];
//		else
//			arr2[k++] = arr[j++];
//	}
//
//	//���� �� ���� ���ҵ� ��+�� �迭�� �־��ֱ�
//	int tmp = i > mid ? j : i; //i�� mid���� ũ�� ���� �迭�� ��� �Ҹ�� ���̹Ƿ� j����, �ƴϸ� i����
//
//	while (k <= right)
//		arr2[k++] = arr[tmp++];
//
//	//arr2�� �Ϻ��� ������ �迭���� �� �迭�� arr�� �Ű��ֱ�
//	for (int i = left; i <= right; i++)
//		arr[i] = arr2[i];
//}
//
//void mergeSort(int left, int right)
//{
//	int mid;
//	if (left < right)
//	{
//		mid = (left + right) / 2;
//		
//		//divide
//		mergeSort(left, mid);
//		mergeSort(mid + 1, right);
//
//		//conquer
//		merge(left, right);
//	}
//}
//
//int main()
//{
//	int n;
//
//	cout << "�迭�� ũ�� �Է� : ";
//	cin >> n;
//
//	arr2 = new int[n];
//
//	cout << "Value �Է� : " << endl;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	mergeSort(0, n - 1);
//
//	cout << "Sorting Result : ";
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	return 0;
//}