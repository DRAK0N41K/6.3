#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;
void arrSum(int n, int counter = 0)
{
	
	
	int* a = new int[n];
	for (int j = 0;j < n;j++)
	{


		cin >> a[j];

	}
	for (int i = 0; i < n; ++i)
		cout << a[i] << ", ";
	for (int j = 0;j < n;j++)
	{
		if (a[j] < 0)
		{
			counter++;
		}
	}
	
	cout << endl;
	cout << counter;
}
int main()
{
	
	arrSum(15);




}



