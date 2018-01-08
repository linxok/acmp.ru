#include <bits/stdc++.h>
using namespace std;
int main()
{
	string A[101];
	int K;
	int C[101][101];
	int n, m;
	cin >> n >> m;

	for ( int i = 0; i < n; i++ )
	{
		cin >> A[i];
		for (int j=0; j<m; j++)
		{
			if (A[i][j] == '.') C[i][j]=0;
			if (A[i][j] == 'B') C[i][j]=1;
			if (A[i][j] == 'G') C[i][j]=2;
			if (A[i][j] == 'R') C[i][j]=4;

		}

	}

	for ( int i = 0; i < n; i++ )
	{
		for ( int j = 0; j < m; j++ )
		{
		cin >> K;

			if (((A[i][j]) !='.')	&& 	 (((C[i][j]) & K) == 0) )
		{
			cout << "NO";
			return 0;
		}
	}
}

cout << "YES";
return 0;
}
