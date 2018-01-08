#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
	int n, answ = 0, a; cin >> n;

	for ( int i ( 0 ); i < n * n; i++ )
	{
		cin >> a;

		if ( a == 1 ) { answ ++; }
	}

	cout << answ / 2;
	return 0;
}
