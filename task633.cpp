#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
	string s, s1[3];
	getline ( cin, s );
	cin  >> s1[0] >> s1[1] >> s1[2];
	sort ( s1, s1 + 3 );
	cout << s << ": " << s1[0] << ", " << s1[1] << ", " << s1[2];
}
