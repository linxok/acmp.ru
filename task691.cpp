#include <iostream>
#include <cstring>

using namespace std;

bool C (char c)
{   char ch[12] = {'A', 'B', 'C', 'E', 'H', 'K', 'M', 'O', 'P', 'T', 'X', 'Y'};
    for (int i=0; i<12; i++)
    {
        if (ch[i] == c)
            return true;
    }
    return false;
}
bool S (char c)
{   char ch[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
    for (int i=0; i<10; i++)
    {
        if (ch[i] == c)
            return true;
    }
    return false;
}

int main()
{
    int n;

    cin >>n;
    string s[n];
    for (int i=0; i<n; i++)
    {
    cin >>s[i];
    }

    for (int i =0; i<n; i++)
    {
        if (s[i].size()>6)
        {
            cout << "No" << endl;
        }else  if (C(s[i][0]) && S(s[i][1]) && S(s[i][2]) && S(s[i][3]) && C(s[i][4]) && C(s[i][5]))
        {
            cout << "Yes" << endl;
        }else cout << "No" << endl;

    }

    return 0;
}
