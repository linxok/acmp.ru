#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main()
{
	double x1,x2,y1,y2,l=0;

	cin >> x1 >> y1 >> x2 >> y2;

	l= sqrt(pow(abs(x1-x2), 2) + pow(abs(y1-y2), 2) );

	cout << fixed << setprecision(5)  << l;

	return 0;
}
