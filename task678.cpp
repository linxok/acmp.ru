#include <iostream>
#include <cstring>
using namespace std;



int main()
{
	string s;
	cin >> s;
	int p1 = 1, p2 = 0, p3 = 0;

	for ( int i = 0; i < s.size(); i++ )
	{
		switch ( s[i] )
		{
			case 'A':
				{
					swap ( p1, p2 );
					break;
				}

			case 'B':
				{
					swap ( p2, p3 );
					break;
				}

			case 'C':
				{
					swap ( p1, p3 );
					break;
				}
		}
	}

	if ( p1 )  { cout << "1"; }

	if ( p2 )  { cout << "2"; }

	if ( p3 )  { cout << "3"; }

	return 0;
}
