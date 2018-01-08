#include<iostream>
#include<cmath>
using namespace std;
int n, a = 0, b = 0;
int main()
{
    cin >> n;
    while(n % 5 != 0)
    {
        n = n - 3;
        b++;
    }
    a = n / 5;
    cout << a << ' ' << b;
}
