#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long s,  n;
	cin >> n >> s;
	long long arr[n];

	for ( long long i = 0; i < n; i++ )
	{
		cin >> arr[i];
	}

	sort ( arr, arr + n );
	long long i = 0;

	while ( s >= 0 )
	{
		s -= arr[i];
		i++;
	}

	cout << i - 1;
	return 0;
}
