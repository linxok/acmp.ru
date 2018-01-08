#include<iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
    int sx, sy, cx,cy;
    float ls, lc;
    cin >> sx >> sy >> cx >> cy;
    int n;
    cin >> n;
    int **arr = new int* [n];
    for (int i=0; i<n; i++)
    {
        arr[i] = new int [2];
        cin >> arr[i][0] >> arr[i][1];
    }
    for (int i=0; i<n; i++)
    {
        ls = sqrt(pow(abs(sx-arr[i][0]),2) + pow(abs(sy-arr[i][1]),2) );
        lc = sqrt(pow(abs(cx-arr[i][0]),2) + pow(abs(cy-arr[i][1]),2) );
        if (2*ls <= lc)
        {
            cout << i+1;
            return 0;
        }
    }
    cout << "NO";

    for (int i=0; i<n; i++)
    {
        delete []arr[i];
    }
    delete [] arr;
    return 0;
}
