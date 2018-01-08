#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>

using namespace std;


int main()
{
	int N, M;

	cin >> N >> M;
	string ch[N];
	int minch = M, kch = 0;

	for ( int i = 0; i < N; i++ )
	{
		cin >> ch[i];
		for ( int j = 0 ; j < M; j++ )
		{


			if ( ch[i][j] == '.' )
			{
				kch ++;
			}
		}

		if ( minch > kch )
		{
			minch = kch;
		}
		kch =0;
	}
	cout << minch;

	return 0;
}
