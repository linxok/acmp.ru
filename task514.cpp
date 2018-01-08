#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k = 0;
	cin >> n;

	while ( n > k )
	{
		k++;
		n -= k;
	}

	cout << k;
	return 0;
}
