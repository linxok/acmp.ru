#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

bool findS ( int **a, int kol, int maxx )
{
	int *arrTemp = new int[maxx + 1];

	for ( int d = 1; d <= maxx; d++ ) { arrTemp[d] = 0; }

	for ( int i = 0; i < maxx; i++ )
	{
		arrTemp[ ( a[kol][i] )] = 1;
	}

	for ( int i = 1; i <= maxx; i++ )
	{
		if ( arrTemp[i] == 0 )
		{
			delete arrTemp;
			return false;
		}
	}

	delete arrTemp;
	return true;
}
bool findK ( int **a, int kol, int maxx )
{
	int *arrTemp = new int[maxx + 1];

	for ( int d = 1; d <= maxx; d++ ) { arrTemp[d] = 0; }

	for ( int i = 0; i < maxx; i++ )
	{
		arrTemp[ ( a[i][kol] )] = 1;
	}

	for ( int i = 1; i <= maxx; i++ )
	{
		if ( arrTemp[i] == 0 )
		{
			delete arrTemp;
			return false;
		}
	}

	delete arrTemp;
	return true;
}


bool findC ( int **a, int m )
{
	int *arrTemp = new int[m * m + 1];

	for ( int d = 1; d <= m * m; d++ ) { arrTemp[d] = 0; }

	for ( int i = ( m * m / 2 - m / 2 - 1 ); i < ( m * m / 2 + m / 2 ); i++ )
	{
		for ( int j = ( m * m / 2 - m / 2 - 1 ); j < ( m * m / 2 + m / 2 ); j++ )
		{
			arrTemp[ ( a[i][j] )] = 1;
			cout << a[i][j] << " ";
		}
	}

	for ( int i = 1; i <= m * m; i++ )
	{
		if ( arrTemp[i] == 0 )
		{
			delete arrTemp;
			return false;
		}
	}

	delete arrTemp;
	return true;
}

int main()
{
	//ifstream in ( "input.txt" );
	int n;
	cin >> n;
	int **arrN = new int*[n * n];

	for ( int i = 0; i < n * n; i++ )
	{
		arrN[i] = new int[n * n];

		for ( int j = 0; j < n * n; j++ )
		{
			cin >> arrN[i][j];
		}
	}

	for ( int i = 0; i < n * n; i++ )
	{
		if ( ! ( findS ( arrN, i, n * n ) ) )
		{
			cout << "Incorrect";
			return 0;
		}
	}

	for ( int i = 0; i < n * n; i++ )
	{
		if ( ! ( findK ( arrN, i, n * n ) ) )
		{
			cout << "Incorrect";
			return 0;
		}
	}

	if ( ( ! ( n & 1 ) ) && ( ! ( findC ( arrN, n ) ) ) )
	{
		cout << "Incorrect";
		return 0;
	}

	cout << "Correct";

	for ( int i = 0; i < n * n; i++ )
	{ delete arrN[i]; }

	delete arrN;
	return 0;
}
