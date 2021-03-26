//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//// theta log n
//int BsMethod(int arr[], int start, int end, int target)
//{
//	int mid;
//
//	if (start > end) //원하는 값이 없다는 것.
//		return 0;
//	else
//	{
//		mid = (start + end) / 2;
//
//		if (target == arr[mid])
//			return mid;
//		else if (target < arr[mid])
//			return BsMethod(arr, start, mid - 1, target);
//		else
//			return BsMethod(arr, mid + 1, end, target);
//	}
//}
//
//int main()
//{
//	int arr[10] = {24, 1, 5, 8, 12, 23, 52, 16, 62, 71};
//
//	//sorting
//	sort(arr, arr+10);
//
//	// printing arr
//	for (int i : arr)
//		cout << i << " ";
//	cout << endl;
//
//	// binary search
//	cout << BsMethod(arr, 0, 9, 52) << endl;;
//	
//}