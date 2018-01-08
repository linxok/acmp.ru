#include <iostream>
#include <string>

using namespace std;

int main ( void )
{
	string s1,s2;
	s1="asdfghjklzxcvb";
	s2="xas";
	if (s1.find(s2)== string::npos)
    {
        cout << "1";
    } else cout << "2";

	return 0;

}

