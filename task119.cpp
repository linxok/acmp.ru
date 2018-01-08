#include <iostream>


using namespace std;

int main()
{
	int n, h, m, s;
	cin >> n;
	int *x = new int[n];

	for ( int i = 0; i < n; i++ )
	{
		cin >> h >> m >> s;
		x[i] = h * 3600 + m * 60 + s;
	}
	bool na = true;
	while ( na )
	{
		na = false;
		for ( int i = 0; i < n-1; i++ )
		{
			if ( x[i] > x[i + 1] )
			{
				int temp = x[i];
				x[i] = x[i + 1];
				x[i + 1] = temp;
				na = true;
			}
		}
	}

	for ( int i = 0; i < n; i++ )
	{
		h = x[i] / 3600;
		m = ( x[i] / 60 ) % 60;
		s = x[i] % 60;
		cout << h << " " << m << " " << s << endl;
	}

	delete x;
	return 0;
}
