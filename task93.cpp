#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int n,m,c=0,f=0;
    cin >> n;
    string a[30],b[30];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin >> m;
    for( int h=0; h<n; h++)
    {
        for (int i=0; i<m; i++)
        {
            cin>>b[i];
            int l=a[h].size();
            if (l!=b[i].size()) continue;
            else
                for (int j=0; j<l; j++)
                {
                    if (a[h][j]!=b[i][j]) c++;
                }
            if (c==1) f++;
            c=0;
        }
        cout <<f<<' ';
        f=0;
    }

}
