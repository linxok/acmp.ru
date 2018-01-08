#include <iostream>


using namespace std;

int main()
{
	int n;
	cin >> n;
	n = n%3;

	switch (n)
	{
		case 1 : {
			cout << "VGC";
			break;
		}
		case 2 : {
			cout << "CVG";
			break;
		}
		case 0 : {
			cout << "GCV";
			break;
		}
	}

	return 0;
}
