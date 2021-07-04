//#include <iostream> //2017203035 김수헌
//#include <string>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
///*
//	Programing Language : C++
//	Compiler : MSVC, Microsoft Visual C++
//*/
//
//int result = 0; //최솟값 설정하기 위한 변수
//vector<pair<int, int>> pos; //경우의 수 최솟값일 때 해당 좌표를 저장할 벡터
//
//void changeBulb(int** temp, int row, int col, int n) //상하좌우 + 현재위치 반전
//{
//	temp[row][col] = !temp[row][col]; //현재 위치
//
//	if (row + 1 < n) //위
//		temp[row + 1][col] = !temp[row + 1][col];
//
//	if (row - 1 >= 0) //아래
//		temp[row - 1][col] = !temp[row - 1][col];
//
//	if (col - 1 >= 0) //왼쪽
//		temp[row][col - 1] = !temp[row][col - 1];
//
//	if (col + 1 < n) //오른쪽
//		temp[row][col + 1] = !temp[row][col + 1];
//}
//
//int checkBulb(int** temp, vector<pair<int, int>> &tempPos, int n) //첫 줄 경우의 수만 고려하고 나머지 전구들에 대해 가능한지 체크
//{
//	int count = 0;
//
//	for (int row = 1; row < n; row++)
//		for (int col = 0; col < n; col++)
//			if (temp[row - 1][col]) //바로 윗 행에 켜진 곳이 발견된다면
//			{
//				if (result < count) //만약 result에 저장된 최솟값 보다 현재 count 값이 더 크다면, return MAX;
//					return n * n + 1;
//
//				count++;
//				tempPos.push_back(make_pair(row, col));
//				changeBulb(temp, row, col, n); //현재 [row][col]을 꺼줌으로써 위를 꺼줌
//			}
//
//	for (int row = 0; row < n; row++)
//		for (int col = 0; col < n; col++)
//			if (temp[row][col] == 1) //검사 했는데 켜진 경우가 하나라도 있으면
//				return n * n + 1; //MAX값 반환
//
//	return count;
//}
//
//void printOutput(int** temp, int n)
//{
//	for (int row = 0; row < n; row++)
//	{
//		for (int col = 0; col < n - 1; col++)
//		{
//			if (temp[row][col] == 1)
//				cout << "O ";
//			else if (temp[row][col] == 0)
//				cout << "# ";
//		}
//
//		//각 행 마지막 좌표는 뒤에 공백 없이
//		if (temp[row][n - 1] == 1)
//			cout << "O";
//		else if (temp[row][n - 1] == 0)
//			cout << "#";
//
//		cout << endl;
//	}
//}
//
//int main()
//{
//	int count = 0; //켜진 전구 최솟값 카운트하기 위함
//	vector<pair<int, int>> tempPos; //좌표값 저장할 벡터
//
//	int n;
//	cin >> n;
//
//	result = n * n + 1; //MAX값 설정
//
//	//2차원 동적 배열 할당
//	int** arr;
//	arr = new int* [n];
//	for (int i = 0; i < n; i++)
//		arr[i] = new int[n];
//
//	//2차원 동적 배열 할당
//	int** temp;
//	temp = new int* [n];
//	for (int i = 0; i < n; i++)
//		temp[i] = new int[n];
//	
//	//0으로 초기화
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			arr[i][j] = 0;
//
//	//O# 정보 입력
//	for(int i = 0; i < n ; i++)
//	{
//		char c;
//		for (int j = 0; j < n; j++)
//		{
//			cin >> c;
//			if (c == 'O')
//				arr[i][j] = 1; //켜짐 표시
//		}
//	}
//
//	////출력
//	//for (int i = 0; i < n; i++)
//	//{
//	//	for (int j = 0; j < n; j++)
//	//	{
//	//		cout << arr[i][j];
//	//	}
//	//	cout << endl;
//	//}
//
//
//	for (int i = 0; i < (int)pow(2, n); i++) //첫 줄의 모든 경우의 수 확인하기 위해 2^n 경우의 수
//	{
//		//원본 배열값을 temp로 복사
//		for (int row = 0; row < n; row++)
//			for (int col = 0; col < n; col++)
//				temp[row][col] = arr[row][col];
//		
//		count = 0;
//		tempPos.clear();
//
//		for (int j = 0; j < n; j++)
//			if (i & (int)pow(2, j)) //첫 줄 10개를 누를지 말지 판단 - 비트마스킹 i비트에 j가 포함되어 있는지 비트가 1이면 존재, 0이면 없음
//			{
//				count++;
//				tempPos.push_back(make_pair(0, j)); //벡터에 배열 저장
//				changeBulb(temp, 0, j, n); //[0][j] 켜줌
//			}
//		
//		count += checkBulb(temp, tempPos, n); //첫 줄을 제외한 나머지 행에서 카운트
//		
//		if (count < result) //카운트한 값이 최솟값이라면
//		{
//			//전역변수 pos Vector에 tempPos 좌표값 복사
//			pos.clear();
//			copy(tempPos.begin(), tempPos.end(), back_inserter(pos)); //Deep Copy
//
//			//result 최솟값으로 업데이트
//			result = count;
//		}
//	}
//
//	if (result == n * n + 1) //모든 경우에 대해 업데이트가 한번도 안된 경우
//		cout << "no solution." << endl;
//	else
//	{
//		//temp 배열 재사용
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//				temp[i][j] = 0;
//		
//		//mark 해놓은 좌표들 1로 표시
//		for(int i = 0 ; i < pos.size(); i++)
//				temp[pos[i].first][pos[i].second] = 1;
//		
//		//결과 출력
//		printOutput(temp, n);
//	}
//
//	//동적할당 메모리 해제
//	for (int i = 0; i < n; i++)
//	{
//		delete[] arr[i];
//		delete[] temp[i];
//	}
//	delete[] arr;
//	delete[] temp;
//
//	return 0;
//}