#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

void Check (int *a)
{
	for (int i=1; i<=100; i++)
	cout << a[i];
}

int main()
{
	ifstream in ( "input.txt" );
	int n;
	in >> n;
	int **arrN = new int*[n * n];

	for ( int i = 0; i < n * n; i++ )
	{
		arrN[i] = new int[n * n];

		for ( int j = 0; j < n * n; j++ )
		{
			in >> arrN[i][j];
		}
	}

	for ( int i = 1; i < n; i++ )
	{
		for ( int j = 1; j < n; j++ )
		{
			int d[101] = {0};

			for ( int y = ( i - 1 ) * n + 1; y < i * n; y++ )
			{
				for ( int x = ( j - 1 ) * n + 1; x < j * n; x++ )
				{
					d[arrN[y][x]] = 1;
				}
			}

			Check ( d );
		}
	}

	return 0;
}
