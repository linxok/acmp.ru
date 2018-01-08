#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, x,y;
    cin >> n;
    for (int k =0; k<n; k++)
    {
        cin >> x >> y;
        int arr[x][y];
        for (int i=0; i<x; i++)
        {
            for (int j=0; j<y; j++)
            {
                cin >> arr[i][j];
            }
        }
        bool OK=true;
        for (int i=0; i<x-1; i++)

        {
            for (int j=0; j<y-1; j++)
            {
                if( ((arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1]) % 4) == 0 )
                {
                    OK=false;
                }
            }
        }
        if (OK)
        {
            cout << "YES"<< endl;
        }
        else
        {
            cout << "NO"<< endl;
        }
    }

    return 0;
}
