#include <iostream>
#include <string>

using namespace std;

int main ( void )
{
	int a,b =0;
	cin >> a;
	if (a > 0)
	{
		b = (a+1)*a/2;
	}
	else
	{
		b = ((a-1)*(-a)/2)+1;

	}
	cout << b;
	return 0;

}

