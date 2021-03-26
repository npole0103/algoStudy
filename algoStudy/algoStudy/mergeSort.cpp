//#include <iostream> //https://dpdpwl.tistory.com/53
//using namespace std;
//
//int arr[1000001]; //본 배열
//int* arr2; //임시 배열
//
//void merge(int left, int right)
//{
//	int mid = (left + right) / 2;
//
//	int i = left; // 왼쪽 배열
//	int j = mid + 1; // 오른쪽 배열
//	int k = left; // 왼쪽+오른쪽 배열
//
//	while (i <= mid && j <= right) //둘 중 하나가 빌 때까지
//	{
//		if (arr[i] <= arr[j])
//			arr2[k++] = arr[i++];
//		else
//			arr2[k++] = arr[j++];
//	}
//
//	//정렬 후 남은 원소들 왼+오 배열에 넣어주기
//	int tmp = i > mid ? j : i; //i가 mid보다 크면 왼쪽 배열이 모두 소멸된 것이므로 j리턴, 아니면 i리턴
//
//	while (k <= right)
//		arr2[k++] = arr[tmp++];
//
//	//arr2에 완벽히 정리된 배열들을 본 배열인 arr에 옮겨주기
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
//	cout << "배열의 크기 입력 : ";
//	cin >> n;
//
//	arr2 = new int[n];
//
//	cout << "Value 입력 : " << endl;
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