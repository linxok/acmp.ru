#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


int main()
{
	string a;
	cin >> a;
	int i = 0;

	if ( a[0] >= 65 && a[0] <= 72 && a[3] >= 65 && a[3] <= 72 && a[1] >= 49 && a[1] <= 56 && a[4] >= 49 && a[4] <= 56 && a[2] == 45 )
	{
		if ( abs ( a[0] - a[3] ) == 2 && abs ( a[1] - a[4] ) == 1 ) { i++; }

		if ( abs ( a[0] - a[3] ) == 1 && abs ( a[1] - a[4] ) == 2 ) { i++; }

		if ( i == 1 ) { cout << "YES"; }

		if ( i == 0 ) { cout << "NO"; }
	}

	else { cout << "ERROR"; }

	return 0;
}
