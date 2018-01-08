#include<stdio.h>
#include<vector>
short int n,m,x;
int cnt,k;
std::vector<short int> maxx(750,-1001),minn(750,1001);
int main()
{
    scanf("%hi%hi",&n,&m);
    while(k!=n*m&&scanf("%hi",&x))
    {
        if(x>maxx[k%m])maxx[k%m]=x;
        if(x<minn[k/m])minn[k/m]=x;
        k++;
    }
    for(short int i=0; i<n; i++)
        for(short int j=0; j<m; j++)
            if(maxx[j]==minn[i])cnt++;
    printf("%d",cnt);
    return 0;

}
