#include <iostream>
#include <cmath>

using namespace std;
int main ()
{
	int x1, x2, y1, y2, r1, r2, x0 = 0, y0 = 0 ;
	double xy = 0.0;
	cin >> x1 >> y1 >> r1;
	cin >> x2 >> y2 >> r2;
	x0 = abs ( x1 - x2 );
	y0 = abs ( y1 - y2 );

	if ( ( x0 == 0 ) || ( y0 == 0 ) )
	{ xy = abs ( x0 - y0 ); }

	else
	{ xy = sqrt ( ( x0 * x0 + y0 * y0 ) ); }

	if (  (( xy == 0 ) && ( r1 != r2 )) ||  (((xy < (r1<r2 ? r2 : r1 )) && (xy + (r1<r2 ? r1 : r2 ) < (r1<r2 ? r1 : r2 ) )  )) )
	{
		cout << "NO";
		return 0;
	}

	if ( ( ( r1 + r2 ) >= xy ) )
	{
		cout << "YES";
		return 0;
	}

	else
	{
		cout << "NO";
		return 0;
	}

	return 0;
}
