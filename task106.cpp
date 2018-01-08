#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main()
{
	int N, n,x =0;
	cin >> N;

	for (int i =0; i<N; i++)
	{
		cin >> n;
		x += n;

	}
	if ( (N-x) > x )
	{
		cout << x ;
	}
	else
	{
		cout << (N-x);
	}


	return 0;
}
