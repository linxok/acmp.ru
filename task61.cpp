#include <iostream>
#include <cstdlib>
#include <cmath> // для round


using namespace std;

int main()
{
	int a, b, ap =0, bp =0;

	for ( int i = 0; i < 4; i++ )
	{
		cin >> a >> b;
		ap += a;
		bp += b;
	}

	if ( ap > bp )
	{
		cout << "1";
	}

	else
		if ( ap < bp )
		{
			cout << "2";
		}

		else
		{ cout << "DRAW"; }

	return 0;
}
