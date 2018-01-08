#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cctype>

using namespace std;
int main()
{
    int n;
    vector<char> n1;
    vector<char> n2;
    vector<char>::iterator last;
    string s1,s2;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> s1 >> s2;
        copy(s1.begin(), s1.end(), back_inserter(n1));
        copy(s2.begin(), s2.end(), back_inserter(n2));
        sort(n1.begin(),n1.end());
        sort(n2.begin(),n2.end());
        last = unique(n1.begin(),n1.end());
        n1.erase(last, n1.end());
        unique(n2.begin(),n2.end());
        last = unique(n2.begin(),n2.end());
        n2.erase(last, n2.end());

        if(n1==n2)
        {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
        n1.erase(n1.begin(),n1.end());
        n2.erase(n2.begin(),n2.end());
    }

    return 0;
}
