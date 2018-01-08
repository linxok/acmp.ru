#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main()
{
	int N, V, S, A = -1, maxA = -1;
	cin >> N;


	for (int i = 1; i <= N; i++)
	{
		cin >> V >> S;
		if (S)
		{
			if ( V > maxA)
			{
				maxA = V;
				A = i;
			}
		}
	}
	cout << A;
	return 0;
}
