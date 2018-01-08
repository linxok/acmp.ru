#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string function ( string a, string b )
{
	int k = a.length(), l = b.length();

	if ( k == l )
	{return ( max ( a, b ) );}

	else
	{
		if ( k > l ) {return a;}

		else {return b;}
	}
}
int main ()
{
	string a, b, c, max;
	int i, j, k, l;
	cin >> a >> b >> c;
	max = function ( a, b );
	max = function ( max, c );
	cout << max << endl;
	return 0;
}
