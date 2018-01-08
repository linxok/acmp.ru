#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
 /*     int b=1,re1=0,re2=0,err=0;

    string a,res1="",res2="";
    cin>>a;
    while(b!=a.size())
    {
        for(int i=0; i<b; i++)
        {
            res1+=a[i];
        }
        for(int i=b; i<a.size(); i++)
        {
            res2+=a[i];
        }
        while(res1.size()>1)
        {
            re1=0;
            for(int i=0; i<res1.size(); i++)
            {
                re1+=res1[i]-48;
            }
            stringstream ss;
            ss<<re1;
            ss>>res1;
        }
        while(res2.size()>1)
        {
            re2=0;
            for(int i=0; i<res2.size(); i++)
            {
                re2+=res2[i]-48;
            }
            stringstream jj;
            jj<<re2;
            jj>>res2;
        }
        if (re1==re2)
        {
            cout<<"YES";
            err++;
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
