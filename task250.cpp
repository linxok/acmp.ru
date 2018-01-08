#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
unsigned int ver (unsigned int ch, unsigned int renj)
{
    set<char>sch1, sch2 ;
    string s1, s2;
    s1 = to_string(ch-renj);
    s2 = to_string(ch+renj);
    sch1.insert(s1.begin(),s1.end());
    sch2.insert(s2.begin(),s2.end());

    if (sch1.size() <= 2)
    {
        return stoi(s1);
    }
    if (sch2.size() <= 2)
    {
        return stoi(s2);
    }
    return 0;
}
int main ()
{
    unsigned int x;
    cin >> x;
    unsigned int y;
    for (unsigned int i = 0; i< x; i++)
    {
        y = ver(x, i);
        if (y != 0)
        {
            cout << y;
            return 0;
        }
    }
    return 0;
}
