#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M, k = 0;
	cin >> N >> M;
char A[102][102];
	for ( int i = 1; i <= N; i++ )
	{
		for ( int j = 1; j <= M; j++ )
		{
			cin >> A[i][j];
		}
	}

	for ( int i = 1; i <= N; i++ )
	{
		for ( int j = 1; j <= M; j++ )
		{
			if ( A[i][j] == '.'  && A[i + 1][j] != '*' && A[i - 1][j] != '*' && A[i][j + 1] != '*' && A[i][j - 1] != '*')
			{ k++; }
		}
	}

	cout << k;
	return 0;
}
