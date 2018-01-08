#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
	int a, b ,a1,b1;
	cin >> a >> b;
	a1 =a;
	b1=b;
	while(b) b^=a^=b^=a%=b;
  cout << (a1*b1/a);
	return 0;
}
