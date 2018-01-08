#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ( void )
{
	string s;
	int n1 = 0, n2 = 0, h = 0, m = 0;
	int hour = 0, minuts = 0;
	cin >> s;
	cin >> h >> m;
	n1 = ( s[0] - 48 ) * 10 + ( s[1] - 48 );
	n2 = ( s[3] - 48 ) * 10 + ( s[4] - 48 );
	minuts = n2 + m;

	if ( minuts > 59 )
	{
		minuts = minuts % 60;
		hour++;
	}

	hour += ( n1 + h ) % 24;
	printf ( "%02i:%02i", hour, minuts );
	return 0;
}
