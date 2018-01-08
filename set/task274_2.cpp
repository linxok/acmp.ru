#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    int n;
    set<char> n1;
    set<char> n2;
    string s1,s2;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> s1 >> s2;
        n1.insert(s1.begin(), s1.end());
        n2.insert(s2.begin(), s2.end());

        if(n1==n2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        n1.erase(n1.begin(),n1.end());
        n2.erase(n2.begin(),n2.end());
    }
    return 0;
}
