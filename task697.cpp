#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>


using namespace std;


int main()
{

	int L,W,H,S=0;

	cin >> L >> W >> H;

	if ((2*H*(L+W)) %16 != 0 )
	cout << ((2*H*(L+W)) / 16) + 1;
	else
	cout << ((2*H*(L+W)) / 16);
	return 0;
}

