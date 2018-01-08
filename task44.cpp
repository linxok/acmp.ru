#include <iostream>
#include <string>

using namespace std;


int main()
{
	int a = 0, n, i = 0, s = 0;

	string st;
	cin >> st;

	for ( i = 0; i < st.size(); i++ )
	{
		if (( st[i] == '>' && st[i + 1] == '>' && st[i + 2] == '-' && st[i + 3] == '-' && st[i + 4] == '>' )
			||  ( st[i] == '<' && st[i + 1] == '-' && st[i + 2] == '-' && st[i + 3] == '<' && st[i + 4] == '<' ))
		{ s = s + 1; }
	}

	cout << s;
	return 0;
}
