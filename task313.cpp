#include <stdio.h>

using namespace std;
const int N=105;
int n,mx=-N,used[N];

int main()
{
    scanf("%d",&n);

    for (int i=1; i<=n; i++)
    {
        int a;
        scanf("%d",&a);
        if(!used[a])
        {
            used[a]=i;
        }
        else
        {
            if(i-used[a]>mx)mx=i-used[a];
            used[a]=i;
        }
    }
    printf("%d",mx);
    return 0;
}
