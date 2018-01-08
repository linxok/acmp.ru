#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;
bool ana (string s)
{
    for (int j = 0; j < s.size()/2; j++)
    {
        if (s[j]!= s[s.size()-1-j])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string S;
    getline(cin, S);
    set<char>ch (S.begin(),S.end());
    if (ch.size()==1)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    for (int j = S.size(); j> 1; j--)
    {
        if(!ana(S.substr(0,j)))
        {
            cout << S.substr(0, j);
            return 0;
        }

    }
    cout << "NO SOLUTION";
    return 0;
}
