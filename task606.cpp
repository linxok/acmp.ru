#include <iostream>

using namespace std;


int main()
{
    int n[3];
    for (int i = 0; i<3; i++)
    {
		cin >> n[i];
	}

    if (n[0]+n[1]>=n[2] && n[1]+n[2]>=n[0] && n[2]+n[0]>=n[1] )
    cout << "YES";
    else
    cout << "NO";

	return 0;
}
