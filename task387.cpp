#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, k=0;
	string s;
	cin >> N;
	for(int i =0; i<N; i++)

	{
		cin >>s;
		if (s[0]== s[3])
		{
			k++;
		}
	}
	cout << k;

	return 0;
}
