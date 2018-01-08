#include <iostream>
using namespace std;
int main()
{
	int n=0, s=0;

	cin >> n;
	 for (int i = 1; i <= n; i++)
	 {
		if (!(n%i))
		{
			s += i;

		}

	 }
	 cout << s;

	return 0;
}
