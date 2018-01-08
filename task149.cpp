#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int inArr[N];

	for (int i =0; i<N;i++)
	{
		cin >> inArr[i];
	}


	for (int i =N-1; i>=0;i--)
	{
		cout << inArr[i] << " ";
	}

	return 0;
}
