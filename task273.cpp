#include <iostream>
#include <string>
#include <set>
using namespace std;
int main()
{
    string s;
    char s1[3];
    set<int> sint;
    cin >> s;
    int ssize, xint=0;
    ssize = s.size();
    if (ssize <3)
    {
        cout << '0';
        return 0;
    }
    for (int i1=0 ; i1< ssize-2; i1++)
    {
        for (int i2 = i1+1; i2<ssize-1; i2++)
        {
            for (int i3= i2+1; i3<ssize; i3++)
            {
                s1[0] = s[i1];
                s1[1] = s[i2];
                s1[2] = s[i3];
                xint = (s1[0]-48)*100 + (s1[1]-48)*10 + s1[2]-48;
                if (xint >=100)
                {
                    sint.insert(xint);
                }

            }
        }
    }

    cout << (sint.size());
    return 0;
}
