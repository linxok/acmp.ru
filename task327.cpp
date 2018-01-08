#include <iostream>
#include <cstring>
using namespace std;

int summ(int i)
{
	int k1 = i / 100;
	int k2 = i / 10 % 10;
	int k3 = i % 10;
	return k1+k2+k3;
}

bool findk(int s)
{
	int first = s / 1000;
	int second = s % 1000;
	int secondp = second +1;
	int secondd = second -1;
	first = summ(first);
	secondp = summ(secondp);
	secondd = summ(secondd);
	if ( (secondd == first) || (secondp == first))
	return true;
	else return false;

}

int main()
{
	int n;

	cin >> n;
	int *s = new int[n];

	for (int i=0; i<n; i++)
	{
		cin >> s[i];
	}
	for (int i=0; i<n; i++)
	{

		if (findk(s[i])) cout << "Yes" << endl;
		else cout << "No" << endl;

	}
	return 0;
}
