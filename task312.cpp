#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>


using namespace std;

int main()
{
	int N,A1,A2, D=0, X=0;
	cin >> A1 >> A2 >> N;

	D= A2-A1;
	X= A1 + (N -1)*D;
	cout << X;
	return 0;
}
