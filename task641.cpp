#include <bits/stdc++.h>
#define ll long long;

using namespace std;

int a[10001];

int main()
{
    string s;
    cin>>s;
    long long b = 0,mn1 = 9,mn2 = 9;
    for(int i = 0; i < s.size(); i++)
    {
        a[i]= s[i] - 48;
    }
    for(int i = 0; i < s.size(); i++)
    {
        if(a[i] < a[i + 1])
        {
            for(int j = i; j < s.size() - 1; j++)
            {
                swap(a[j],a[j+1]);
            }
            break;
            b++;
        }
    }
    for(int i = 0; i < s.size(); i++)
    {
        if(a[i] < a[i + 1])
        {
            for(int j = i; j < s.size() - 1; j++)
            {
                swap(a[j],a[j+1]);
            }
            i = 0;
            break;
            b++;
        }
//break;
    }
//swap(a[s.size()-4],a[s.size()-3]);
    for(int i = 0; i < s.size() - 2; i++)
    {
        cout<<a[i];
    }
    return 0;
}
