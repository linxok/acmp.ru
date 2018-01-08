#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, h=0,s=0;
    cin >> N;
	N=N-1;
    if (N < 143)
    {
		int c = N*5;
		h= c/60;
		s= c%60;
		cout << h << " " << s;
		return 0;
    }
    cout << "NO";

	return 0;
}
