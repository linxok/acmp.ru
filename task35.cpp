#include <iostream>
#include<cstring>

using namespace std;
int i, k, n, m;
int main()
{
	i = 0;
	cin >> k;

	while ( i != k )
	{
		cin >> n >> m;
		cout << 19 * m + ( n + 239 ) * ( n + 366 ) / 2 << endl;
		i++;
	}

	return 0;
}
