#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	int n, a, first, second, secondp, secondm, f1, f2, f3, s1, s2, s3, g1, g2, g3;
	cin >> n;

	for ( int i = 1; i <= n; ++i )
	{
		cin >> a;
		first = a / 1000;
		second = a % 1000;
		secondp = second + 1;
		secondm = second - 1;
		f1 = first / 100;
		f2 = first / 10 % 10;
		f3 = first % 10;
		first = f1 + f2 + f3;
		s1 = secondp / 100;
		s2 = secondp / 10 % 10;
		s3 = secondp % 10;
		secondp = s1 + s2 + s3;
		g1 = secondm / 100;
		g2 = secondm / 10 % 10;
		g3 = secondm % 10;
		secondm = g1 + g2 + g3;

		if ( secondp == first || secondm == first )
		{
			cout << "Yes" << endl;
		}

		else
		{
			cout << "No" << endl;
		}
	}

	return 0;
}
