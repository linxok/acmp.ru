#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    string S;
    int n =0, maxn =0;
    getline(cin,S);

    for (int i =0; i< S.size(); i++)
    {
        if ( !((S[i]>=48 && S[i] <= 57) || (S[i]>=65 && S[i] <= 90) ) )
        {
            cout << -1;
            return 0;
        }
        if (maxn < S[i])
        {
            maxn = S[i];
        }
    }
    if (maxn == 48)
    {
            cout << 2;
            return 0;

    }
    if (maxn >= 48 && maxn <= 57 )
    {
        cout <<  (maxn - 48)+1;
    } else cout << (maxn - 65)+11;


    return 0;
}
