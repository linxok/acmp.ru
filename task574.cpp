#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    vector<char> v1(s1.begin(),s1.end());
    vector<char> v2(s2.begin(),s2.end());
    sort(v1.begin(),v1.end());
    sort(v2.begin(), v2.end());
    if (v1 == v2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
