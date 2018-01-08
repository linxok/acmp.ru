#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>


using namespace std;

int main()
{
	int r, r2, r3;
	cin >> r >> r2 >> r3;

	if ( ( r2 + r3 ) <= r )
	{ cout << "YES"; }

	else
	{ cout << "NO"; }

	return 0;
}

