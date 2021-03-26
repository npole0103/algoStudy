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
//		while (quick[left] < pivot) //pivot보다 작은 값이라면
//			left++;
//		while (pivot < quick[right]) //pivot보다 큰 값이라면
//			right--;
//		if (left <= right) //여기까지 도달했다는 것은 왼쪽에 큰 값, 오른쪽엔 작은 값이 들어있다는 뜻
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
//	cout << "배열의 갯수 입력 : ";
//	cin >> n;
//	
//	cout << "Value 입력 " << endl;
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