#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;
int main ()
{
    int n, coun =0, k=0;
    string fin;
    vector<char>vchar;
    cin >> n;
    string *s = new string[n];
    vector<char>::iterator it ;
    for (int i =0; i<n; i++)
    {
        cin >> s[i];
    }
    cin >> fin;
    for (int i=0; i<n; i++)
    {
        vchar.clear();
        copy(fin.begin(), fin.end(), back_inserter(vchar));
        k=0;
        for (int j=0; j< s[i].size(); j++)
        {
            it = find(vchar.begin(), vchar.end(), s[i][j]);
            if (it != vchar.end())
            {
                vchar.erase(it);
                k++;
            }
            if (k == s[i].size())
            {
                coun ++;
            }
        }
    }
    cout << coun;
    return 0;
}
