#include <iostream>
using namespace std;

int atoi ( char ch )
{
	return ( ch - 48 );
}

int main()
{
	string s;
	cin >> s;

	if ( ( atoi ( s[0] ) +  atoi ( s[1] ) +  atoi ( s[2] ) ) ==
			( atoi ( s[3] ) + atoi ( s[4] ) + atoi ( s[5] ) ) )
	{
		cout << "YES";
	}

	else { cout << "NO"; }

	return 0;
}
