#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;
int main()
{
	string str1, str2;
	int b =0,k =0;

	cin >> str1 >> str2;

	for (int i =0 ; i< 4; i++)
	{
		if (str1[i] == str2[i])
		{
			b++;
		}
		for (int j=0; j<4; j++)

		if ((str1[i] == str2[j]) && (i != j))
		{
			k++;
		}

	}

	cout << b << " " << k;
	return 0;
}
