#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	int k=0, maxk=0,mink=0;
	cin >> s;
	for (int i =0; i< s.size(); i++)
	{
		if (s[i] == '1')
		{
			k++;
		}
		else {
			k--;
		}
		if (mink > k)
		mink = k;
		if (maxk < k)
		maxk =k;

	}

	cout << (maxk - mink)+1;

	return 0;
}
