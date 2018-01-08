#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;
int main()
{
	int N , T, oT =0, maxoT = 0;

	cin >> N;

	for (int i=0; i<N; i++)
	{
		cin >> T;
		if (T >0)
		{
			oT ++;
		}
		else
		{
			if (maxoT < oT)
			{
				maxoT = oT;
			}
			oT=0;
		}
		if (maxoT < oT)
			{
				maxoT = oT;
			}
	}

	cout << maxoT;

	return 0;
}
