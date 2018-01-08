#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>


using namespace std;

int main ( void )
{
	int n, k;
	cin >> n >> k;
	string str;
	cin >> str;
//	set<string> lul;
	int arrN[1000000] = {0};

	for ( int i = k; i <= n; i++ )
	{
		 string s = (str.substr ( i - k, k ));
		 int h = stoi (s);

		if ( arrN[h] == 1 ) {cout << "YES"; return 0;}

		else { arrN[h]++;}
	}

	cout << "NO";
	return 0;
}
