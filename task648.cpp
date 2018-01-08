#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, x=0, y=0;
    cin >> n;
    int *arr = new int [n];
    for (int i =0; i<n; i++)
        cin >> arr[i];
    sort (arr, arr +n);
    for (int i =0; i<n; i++)
        if (i < (n/2))
            x += arr[i];
        else y += arr[i];

    cout << (y - x);
    delete arr;
    return 0;
}
