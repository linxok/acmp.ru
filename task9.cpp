#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main ()
{
	int N;
	int minN = 65536, maxN = -65536; // for 3 test
	int minInd = 0, maxInd = 0;
	int sumPos = 0, sumReng = 1;
	cin >> N;
	int *inputArr = new int[N];

	for ( int i = 0; i < N; i++ )
	{
		cin >> inputArr[i];

		if ( minN > inputArr[i] )
		{
			minN = inputArr[i];
			minInd = i;
		}

		if ( maxN < inputArr[i] )
		{
			maxN = inputArr[i];
			maxInd = i;
		}

		if ( inputArr[i] > 0  )
		{
			sumPos += inputArr[i];
		}
	}

	if ( minInd > maxInd )
	{
		swap ( maxInd, minInd );
	}

	for ( int i = minInd + 1; i < maxInd; i++ )
	{
		sumReng *= inputArr[i];
	}

	cout << sumPos << " " << sumReng;
	return 0;
}
