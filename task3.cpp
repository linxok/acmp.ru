#include <iostream>
//#include <string>

using namespace std;

int main ( void )
{
	int n;
	cin >> n;
	n /= 10;
	n *= ( n + 1 );

	if ( n == 0 )
	{ cout << 25; }

	else
	{ cout << n << 25; }
}

