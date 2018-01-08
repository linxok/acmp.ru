#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str="", strt="";
    int n, n1=1;
    cin >> n;
    while (str.size()<= n)
    {
        strt += to_string(n1);
        str = str + strt;
        n1++;
    }
    cout << str[n-1];
    return 0;
}
