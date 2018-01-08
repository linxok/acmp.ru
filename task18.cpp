#include<iostream>
using namespace std;
int main ()
{
	length = size_a + size_b + 1;

	for ( int ix = 0; ix < size_a; ix++ )
		for ( int jx = 0; jx < size_b; jx++ )
		{ c[ix + jx - 1] += a[ix] * b[jx]; }

	for ( int ix = 0; ix < length; ix++ )
	{
		c[ix + 1] +=  c[ix] / 10;
		c[ix] %= 10;
	}

	while ( c[length] == 0 )
	{ length-- ; }

	return 0;
}
