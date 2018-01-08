#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1, s2;
    bool rezz = false;
    int code, j;
    cin >> s1 >> s2;

    for (int i = 0; i<= s1.size()- s2.size(); i++)
    {
        code = s1[i] - s2[0];
        cout << "code= "<< code << endl;
        for(j = 0; j < s2.size(); j++)
        {
            if ((s1[i+j]) == (s2[j]+ code) && (!((s1[i+j]-code) <= 65)) )
            {
                rezz = true;
            }
            else
            {
                rezz = false;
                break;
            }
        }
        if (rezz == true && j == s2.size())
        {
            for(int k=0; k< s1.size(); k++)
            {
                cout << ( (char) (s1[k] - code));
            }
            return 0;
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}
