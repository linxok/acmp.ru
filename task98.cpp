#include <iostream>
#include <string>
#include <set>
using namespace std;
int main()
{
    int n=0, n1=0, n2=0;
    cin >> n;
    int *arr =  new int [n];

    for (int i =0; i<n; i++)
    {
        cin >> arr[i];
    }
    int first =0;
    int end = n-1;
    bool persona1 = true;
    while (n!=0)
    {
        if(arr[first]>= arr[end])
        {
            if (persona1)
            {
                n1+=arr[first++];
                n--;
            }
            else
            {
                n2+=arr[first++];
                n--;
            }
            persona1 = !persona1;
        }
        else
        {
            if (persona1)
            {
                n1+=arr[end--];
                n--;
            }
            else
            {
                n2+=arr[end--];
                n--;
            }
            persona1 = !persona1;
        }

    }
    cout << n1 << ":" << n2;
    delete arr;
    return 0;
}
