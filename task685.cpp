#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>


using namespace std;

void swapp(int a[], int a1, int a2)
{

	if (a[a2] > a[a1])
	{
		int temp = a[a1];
		a[a1] = a[a2];
		a[a2] = temp;
	}
}

int main()
{
	int a[5];
	for (int i=0; i<6; i++)
	{
		cin >> a[i];
	}
	swapp (a, 1, 2);
	swapp (a, 0, 1);
	swapp (a, 1, 2);
	swapp (a, 4, 5);
	swapp (a, 3, 4);
	swapp (a, 4, 5);

	cout << (a[0]*a[3]+ a[1]*a[4]+ a[2]*a[5]);
	return 0;
}

