#include<iostream>

using namespace std;

int main()
{
    long long n, minn=0, maxn=0, maxk=0, mink=0, nulln =0;
    cin >> n;
    int *arr = new int[n+1];
    for (int i=1; i<=n; i++)
    {
        cin >> arr[i];
        if (arr[i]<0)
        {
            minn += arr[i];
            mink++;
        }
        else if (arr[i]>=0)
        {
            maxn += arr[i];
            maxk++;
        }

    }

    bool bigpos = true;
    if (maxn < (abs(minn)))
    {
        bigpos = false;
        cout << mink << endl;
    }
    else
    {
        bigpos = true;
        cout << maxk << endl;
    }
    for (int i=1; i<=n; i++)
    {
        if (bigpos)
        {
            if(arr[i] >= 0) cout << i << " ";
        }
        else
        {
            if(arr[i] < 0) cout << i << " ";
        }
    }


    delete arr;
    return 0;
}
