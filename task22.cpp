#include <iostream>
using namespace std;
int main()
{
	int n, k = 0;
	cin >> n;

	while ( n > 0 )
	{
		if ( n % 2 == 1 )
		{ k++; }

		n /= 2;
	}

	cout << k << endl;
	return 0;
}
