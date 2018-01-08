#include <iostream>
#include <string>
#include <cstdio>

using namespace std;


int main ()
{
	int N, taxR = 0, maxTaxR = 0, s=1;
	cin >> N;
	int *arr = new int [N];

	for ( int i = 0; i < N; i++ )
	{
		cin >> arr[i];
	}

	cin >> taxR;
	maxTaxR = arr[0] * taxR;

	for ( int i = 1; i < N; i++ )
	{
		cin >> taxR;

		if ( maxTaxR < ( arr[i] * taxR ) )
		{ maxTaxR = ( arr[i] * taxR );
		s = i +1;}
	}

	cout << s;
	//  delete arr[N];
	return 0;
}
