#include <iostream>
using namespace std;

int main()
{
/*
    int n, maxN=0, currentN =0;
    cin >> n;
    int *arr = new int[n];
    for (int i=0; i<n; i++) cin >> arr[i];

    bool comp = arr[0] > arr[1];

    for (int i =0; i < n; i++)
    {
        if (comp)
        {
            if (arr[i] > arr[i+1])
            {
                currentN ++;
                comp = !comp;


            }
            else
            {
                if (maxN < currentN)
                {
                    maxN = currentN;
                }
                currentN = 2;
            }
        }
        else
        {
            if (arr[i] < arr[i+1])
            {
                currentN ++;
                comp = !comp;

            }
            else
            {
                if (maxN < currentN)
                {
                    maxN = currentN;
                }
                currentN = 2;
            }
        }

    }
    if (maxN < currentN)
    {
        maxN = currentN;
    }
    cout << maxN;
    delete arr;
    return 0;
}
