#include <iostream>

using namespace std;
int main()
{
	int N;
	int neg = 0;
	int pos = 0;
	cin >> N;
	int *inArr = new int[N];

	for ( int i = 0; i < N; i++ )
	{
		cin >> inArr[i];

		if ( inArr[i] & 1 )
		{
			neg ++;
		}

		else
		{
			pos++;
		}
	}

	for ( int i = 0; i < N; i++ )
	{
		if (  inArr[i] & 1 )
		{ cout << inArr[i] << " ";}
	}

	cout << endl;

	for ( int i = 0; i < N; i++ )
	{
		if ( ! ( inArr[i] & 1 ) )
		{ cout << inArr[i] << " ";}
	}

	cout << endl;

	if ( pos >= neg )
	{ cout << "YES";}

	else
	{ cout << "NO";}

	return 0;
}
