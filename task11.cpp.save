#include <stdio.h>

void rekursia ( int y, int K, int N, int **mas );

int main()
{
	int K, N, **mas, i, j;
//	freopen ( "input.txt", "r", stdin );
//	freopen ( "output.txt", "w", stdout );
	scanf ( "%d %d", &K, &N );
	mas = new int*[N + 1];

	for ( i = 0; i < N + 1; i++ )
	{
		mas[i] = new int[100];

		for ( j = 0; j < 100; j++ )
		{ mas[i][j] = 0; }
	}

	mas[0][0] = 1;
	rekursia ( 1, K, N, mas );
	int fl = 1;

	for ( i = 99; i >= 0; i-- )
	{
		if ( !fl )
		{ printf ( "%d", mas[N][i] ); }

		if ( fl && mas[N][i] )
		{
			fl = 0;
			printf ( "%d", mas[N][i] );
		}
	}

	return 0;
}

void rekursia ( int y, int K, int N, int **mas )
{
	if ( y == N + 1 )
	{ return; }

	int i = 0;

	if ( y - K >= 0 )
	{ i = y - K; }

	for ( ; i < y; i++ )
		for ( int j = 0; j < 100; j++ )
		{ mas[y][j] += mas[i][j]; }

	for ( i = 0; i < 99; i++ )
		if ( mas[y][i] > 9 )
		{
			mas[y][i + 1] += mas[y][i] / 10;
			mas[y][i] %= 10;
		}

	rekursia ( y + 1, K, N, mas );
}
