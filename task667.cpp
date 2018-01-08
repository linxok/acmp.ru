#include<iostream>

using namespace std;
int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c;
    d = a + b;
    if (d % c == 0)
    {
        e = d / c;
    }
    else
    {
        e = (d / c) + 1;
    }
    if (2 * e <= b)
    {
        cout << e;
    }
    else
    {
        cout << 0;
    }
    return 0;
}
