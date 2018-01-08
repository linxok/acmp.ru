#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int zamena(vector<int> v)
{
    int res = 0;
    for(auto x : v)
    {
        res = res * 10 + x;
    }
    return res;
}

bool isSimple(int n)
{
    if(n<2)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    int i = 3;
    while(i*i <= n)
    {
        if(n%i==0)
            return false;
        i +=2;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int cn = n;
    vector<int> v;
    while(cn > 0)
    {
        v.push_back(cn % 10);
        cn /= 10;
    }
    sort(v.begin(),v.end());
    bool fl = true;
    do
    {
        if(!isSimple(zamena(v)))
        {
            fl = false;
        }
    }
    while(next_permutation(v.begin(),v.end()));
    if(fl)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
