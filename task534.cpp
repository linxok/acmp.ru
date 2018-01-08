#include<iostream>

using namespace std;

int main()
{
    int n , k, p;
    cin >>n;
    int *c = new int[n+1];

    for (int i=1; i<=n; i++)
    {
        cin >> c[i];
    }
    cin >> k;

    for (int i=1; i<=k; i++)
    {
        cin >> p;
        c[p]--;
    }
    for (int i=1; i<=n; i++)
    {
        if (c[i]<0) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}
