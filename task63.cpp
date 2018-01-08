#include <iostream>

using namespace std;


int main()
{
	int s, p, x = 0, y = 0;
	cin >> s >> p;

	for ( x = 1; x < 1000; x++ )
	{
		y = s - x;

		if ( ( x <= y ) && ( x * y == p ) )
		{
			cout << x << " " << y;
			return 0;
		}
	}

	return 0;
}
