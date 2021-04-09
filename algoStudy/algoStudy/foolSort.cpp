//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int foolSort(int arr[], int low, int high)
//{
//	if (high > low)
//		if (arr[high] < arr[low])
//			swap(arr[low], arr[high]);
//	if ((high - low) > 1)
//	{
//		int t = (high - low + 1) / 3;
//		foolSort(arr, low, high - t);
//		foolSort(arr, low + t, high);
//		foolSort(arr, low, high - t);
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 2, 7, 24, 56, 73, 25, 123 ,26, 73 };
//
//	foolSort(arr, 0, 8);
//
//	for (int i = 0; i < 9; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
