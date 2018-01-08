#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int *ary = new int [n+2];

    for (int i=0; i<n; i++)
    {
        cin >> ary[i];
    }
    int maxN=0;
    ary[n]=ary[0];
    ary[n+1]=ary[1];

    for (int i=0; i<n; i++)
    {
       if (maxN < (ary[i]+ary[i+1]+ary[i+2]))
        maxN = (ary[i]+ary[i+1]+ary[i+2]);
    }
    cout << maxN;
    return 0;
}
