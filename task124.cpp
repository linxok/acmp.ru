#include <bits/stdc++.h>
using namespace std;


int main()
{
    int m,n,a1=0, a2=0;
    cin >>n >> m;
    int *arr = new int [n+1];
    for(int i=0; i<=n; i++) arr[i]=0;
    for (int i=1; i<=m; i++)
    {
        cin >> a1 >> a2;
        arr[a1]++;
        arr[a2]++;
    }
    for (int i =1; i<=n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
