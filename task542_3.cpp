#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int m, n = 0;
    cin >> m;
    do
    {
        n = 2 * n + m % 2;
        m /= 2;
    }
    while (m > 0);
    cout << n;
    return 0;
}
