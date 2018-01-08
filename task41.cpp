#include <stdio.h>
using namespace std;
int main()
{
    int n,x;
    scanf("%d", &n);
    int arr[201]= {0};
    for (int i=0; i<n; i++)
    {
        scanf("%d", &x);
        arr[x+100]++;
    }
    for (int i=0; i<201;i++)
    {
        if (arr[i])
        {
            for (int j=0; j < arr[i]; j++)
            {
                printf("%d ", i-100);
            }
        }
    }
    return 0;
}
