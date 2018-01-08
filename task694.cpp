#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int a[N][2];
	int maxN=1, minN=31;
	for (int i=0; i<N; i++)
	{
		cin >> a[N][0] >> a[N][1];
		if (a[N][1] < minN) minN = a[N][1];
		if (a[N][0] > maxN) maxN = a[N][0];
	}

	if (maxN > minN) cout << "NO";
	else cout << "YES";
	return 0;

}
