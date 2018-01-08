#include <iostream>
using namespace std;
int main()
{
    int n, m, i, j,*k,c;
    cin >> n >> m;
    k = new int[n];
    for(c = 0; c < n; ++c)
        k[c] = 0;
    for(c = 0; c < m; ++c)
    {
        cin >> i >> j;
        ++k[i-1];
        ++k[j-1];
    }
    for(c = 0; c < n; ++c)
        cout << k[c] << " ";
    return 0;
}
