#include <iostream>
using namespace std;
int main()
{
    int n;
    long long jewels=0;
    cin >> n;
    for (int i=0; i<=n; i++)
    {
        for (int j=i; j<=n; j++)
        {
            jewels += i+j;
        }
    }
    cout << jewels;
    return 0;
}
