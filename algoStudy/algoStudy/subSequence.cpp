#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num;
	int a = 4294967298;

	while (1)
	{
		if(a > 4294967295)
			cout << "OVER" << endl;
		else
			cout << a << endl;


		cin >> num;
		if (num == "EOI")
			break;

		int n = stoi(num);
		int* arr = new int[n];

		for (int i = 0; i < n; i++)
			cin >> arr[i];

		cout << n << endl;
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;
	}

	return 0;
}