#include<bits/stdc++.h>

using namespace std;

char a[101][101];

int main()
{
	int n, m, cnt = 0;
	cin >> n >> m;

	for ( int i = 1; i <= n; i++ )
	{
		for ( int j = 1; j <= m; j++ )
		{
			cin >> a[i][j];
		}
	}

	for ( int i = 1; i <= n; i++ )
	{
		for ( int j = 1; j <= m; j++ )
		{
			if ( a[i][j - 1] != '*' && a[i - 1][j] != '*' && a[i + 1][j] != '*' && a[i][j + 1] != '*' && a[i][j] == '.' )
			{
				cnt++;
			}
		}
	}

	cout << cnt;
	return 0;
}
