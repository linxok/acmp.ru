#include <iostream>
#include <string>
using namespace std;
int main()
{   int n, r[3]= {0};
    char ch = '0';
    string s;
    cin >> n;
    for(int i=0; i<n; i++)
    {    cin >> s;
        for (int i= 0; i< s.size(); i++)
        {   if (s[i] == ch)
            { r[ch-48]++; }
            if (s[i+1] == ch+1)
            { ch+=1; } }
        if (r[0] == r[1] && r[1] == r[2] && r[0]+r[1]+r[2] == s.size())
        { cout << "YES" << endl;  }
        else
        { cout << "NO" << endl;  }
        r[0] = r[1] = r[2] = 0;
        ch = '0';   }
    return 0; }
