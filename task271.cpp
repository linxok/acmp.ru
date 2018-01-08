#include <bits/stdc++.h>

using namespace std;
int main()
{
    double n, k=1,k1=1,k2=1;
    int z=2;
    cin >> n;
    while (k<=n)
    {
        if (k==n)
        {
            cout << 1 <<endl << z;
            return 0;
        }
        k= k1+k2;
        k1=k2;
        k2=k;
        z++;
    }
    cout << 0;
    return 0;
}
