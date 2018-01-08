#include <iostream>
#include <string>
#include <cstdio>

using namespace std;


int main ()
{
	string S;
	cin >> S;

	for (int i = 0; i< (S.size() / 2); i++)
	{
			if (S[i] != S[S.size() - i-1])
			{
				cout << "NO";
				return 0;
			}
	}

	cout << "YES";
	return 0;
}
