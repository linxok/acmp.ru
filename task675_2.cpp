#include <iostream>
#include <string>

using namespace std;

int main ()
{
	int n, m, p[101], min = 32000;
	cin >> n >> m;
	string s[10000];

	for ( int i = 1; i <= n; ++i )
	{
		cin >> s[i];

		for ( int j = 1; j <= m; ++j )
		{
			if ( s[i][j] == '.' )
			{
				p[i]++;
			}
		}

		if ( p[i] < min )
		{
			min = p[i];
		}
	}

	cout << min;
	return 0;
}
