#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main()
{
	string strT = {"qwertyuiopasdfghjklzxcvbnm"};
	char ch;
	cin >> ch;

	for ( int i = 0; i < strT.size(); i++ )
		if ( strT[i] == ch )
		{
			cout << ( strT[ ( i + 1 ) % 26] );
			return 0;
		}

	return 0;
}
