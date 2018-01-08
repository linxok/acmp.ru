#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

string mant(long long i, int j)
{

    string out = "";     //"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *ch[36] = {"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    while (i!=0)
    {
        out.insert (0, ch[i%j]);
        i = i / j;
    }
    return out;
}

int main()
{
    string A, B;
    long long b;
    cin >> A >> b;
    vector<char>a (A.begin(),A.end());
    vector<char>a1;

    for (int i = 2 ; i< 36; i++)
    {
        B = mant(b, i);

        copy(B.begin(),B.end(), back_inserter(a1));

        if (a1 == a)
        {
            cout << i;
            return 0;
        }
        a1.clear();

    }
    cout << '0';
    return 0;
}
