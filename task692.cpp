#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>


using namespace std;

int main()
{
	int N = 0, C = 2;
	cin >> N;

	if ( N <= 0 )
	{
		cout << "NO" ;
		return 0;
	}

	if ( N == 1 )
	{
		cout << "YES";
		return 0;
	}

	while ( C < N )
	{
		C = C * 2;
	}

	if ( C == N )
	{ cout << "YES";}

	else
	{ cout << "NO";}

	return 0;
}
