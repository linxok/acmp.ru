#include <iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    string si;
    set<char>ch;
    int n=0, i=0,z=0;
    cin >> n;
    while (i!=n)
    {
        z++;
        si= to_string(z);
        ch.insert(si.begin(),si.end());
        if (si.size()== ch.size())
        { i++; }
        ch.clear();
    }
    cout << z;
    return 0;
}
