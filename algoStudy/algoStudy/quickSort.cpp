//#include <iostream> //https://dpdpwl.tistory.com/46
//using namespace std;
//
//int quick[10000001];
//
//void quickSort(int i, int j)
//{
//	if (i >= j)
//		return;
//
//	int pivot = quick[(i + j) / 2];
//	int left = i;
//	int right = j;
//
//	while (left <= right)
//	{
//		while (quick[left] < pivot) //pivot���� ���� ���̶��
//			left++;
//		while (pivot < quick[right]) //pivot���� ū ���̶��
//			right--;
//		if (left <= right) //������� �����ߴٴ� ���� ���ʿ� ū ��, �����ʿ� ���� ���� ����ִٴ� ��
//		{
//			swap(quick[left], quick[right]);
//			left++; right--;
//		}
//	}
//
//	quickSort(i, right);
//	quickSort(left, j);
//}
//
//int main()
//{
//	int n;
//	cout << "�迭�� ���� �Է� : ";
//	cin >> n;
//	
//	cout << "Value �Է� " << endl;
//
//	for (int i = 0; i < n; i++)
//		cin >> quick[i];
//
//	quickSort(0, n - 1);
//
//	cout << "Sorting Result" << endl;
//
//	for (int i = 0; i < n; i++)
//		cout << quick[i] << " ";
//
//	return 0;
//}