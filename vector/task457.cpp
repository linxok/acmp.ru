#include<iostream>
#include <algorithm>
#include<string>
#include<vector>
using namespace std;
int main()
{
    char N[5]= {'\0','\0','\0','\0','\0'};
    int minN, maxN, X, k=0;
    for (int i=0; i<4; i++)
    {
        N[i]= getchar();
    }

    while( N != "6174")
    {
        reverse(N,N+4);
        maxN = atoi(N);
        sort(N,N+4);
        minN = atoi(N);
        X= maxN - minN;
        N[0] =  (X/1000)+48;
        N[1] =  (X/100 %10 )+48;
        N[2] =  (X/10 %10)+48;
        N[3] =  (X %10)+48;
        k++;
    }

    cout << N << endl;
    cout << k;
    return 0;

}
