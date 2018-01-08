#include <iostream>


using namespace std;

int main()
{
	string str;
	int x, y;
	cin >> str;
	x = ( str[0] - 65 ) + 1;
	y = ( str[1] - 48 );

	if ( ( ( x + y ) % 2 ) == 0 )
	{
		cout << "BLACK";
	}

	else { cout << "WHITE";}

	return 0;
}
