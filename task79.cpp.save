#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{

	long long int a, b, ans;
	cin >> a >> b;

	if ( b == 0 ) { cout << "1"; }

	ans = a;

	for ( int i = 2; i <= b; i++ )
	{
		ans = (ans * a) % 10;
	}

	if ( ans < 10 ) { cout << ans; }

	else
	{ cout << ans % 10; }

	return 0;
}
