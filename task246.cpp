#include <iostream>
using namespace std;
int main()
{
    int n, k, k1, z=0;
    cin >> n;
    cin >> k;
    k1 =k;
    for (int i=0; i<n-1; i++)
    {
        cin >> k;
        if ( k != k1+1)
        {
            z++;
        }
        k1=k;

    }
    cout << z;
    return 0;
}
