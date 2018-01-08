#include <iostream>
#include <string>
#include <algorithm>
/*
int transf1 (int ch)
{
    return  ch - 65;
}
int transf2 (int ch)
{
    return  ch + 65;
}
int z =0;

int transf3 (int ch)
{
    return  ch + z;
}
using namespace std;
int main()
{
    string s1,s2,s3;
    cin >> s1 >> s2;

    for (int i =25; i>=0; i--)
    {
        s3 = s2;
        transform(s3.begin(), s3.end(), s3.begin(), (int (*) (int)) transf1);
        for (int k = 0; k < s3.size(); k++)
        {
            s3[k]= (s3[k]+ i) % 25;
        }
        transform(s3.begin(), s3.end(), s3.begin(), (int (*) (int)) transf2);

        int n = s1.find(s3);
        cout << s3 << endl;


        if( !(n == string::npos))
        {
             z = (int) s1[n] - s2[0];
             cout << "Z" << z;
            transform(s1.begin(), s1.end(), s1.begin(), (int (*) (int)) transf3);
            cout << s1;
            return 0;
        }


    }
    cout << "IMPOSSIBLE";
    return 0;
}
