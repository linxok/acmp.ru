#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main()
{
	int N;
	cin >> N;

	int inArr[N];

	for (int i =0; i<N; i++)
	{
		cin >> inArr[i];
		if (inArr[i] <= 437 )
		{
			cout << "Crash " << i+1;
			return 0;
		}

	}

	cout << "No crash";

	return 0;
}
