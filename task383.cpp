#include <iostream>
using namespace std;
int main()
{
    int n=0, k=0, i=0, sumj=0, sumi=0;
    cin >>n;
    while(k < n)
    {
        i++;
        int j =i;
        sumj=0;
        sumi=0;
        while (j>0)
        {
            sumi += j % 10;
            j = j / 10;
            sumj++;
        }
        if ((sumi%sumj) == 0)
        {
            k++;
        }
    }
    cout << i;
    return 0;
}
