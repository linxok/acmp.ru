#include <iostream>
#include <cstdlib>
#include <cmath> // для round


using namespace std;

int main()
{
	int inpText;
	string exp = "71828182845904523536028750";
	cin >> inpText;

	if ( inpText == 0 )
	{
		cout << "3";
		return 0;
	}

	cout << "2.";

	for ( int i = 0; i < inpText - 1; i++ )
	{
		cout << exp[i];
	}

	if (( ( exp[inpText] ) - 48 ) >=5 )
	{
		cout << ( char ) ( exp[inpText - 1] + 1 );
	}

	else { cout << ( char ) ( exp[inpText - 1] ); }

	return 0;
}
