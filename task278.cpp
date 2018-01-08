#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long ls1, ls2;
    string s1,s2;
    getline(cin, s1);
    getline(cin, s2);
    ls1= s1.size();
    ls2= s2.size();
    for (long long i = 0, j=0; i<ls2; i++)
    {
        if (s2[i]== s1[j])
        {
            if (j< (ls1-1))
            {
                j++;
            }
            else
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
