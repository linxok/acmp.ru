#include <iostream>
using namespace std;
int main()
{
    size_t x;
    int a=1,b=1,c=1,d=1,countx=0;
    cin >>x;
    if (x<=3)
    {   cout << "0";
        return 0;  }
    for (a=1; a<=b; a++)
    {   for(b=1; b<=c; b++)
        {  for (c=1; c<=(x/2); c++ )
            {   d=(x-a-b-c);
                if ( a<=b && b<=c && c<=d ) { countx++; }
    }   }   }
    cout << countx;
    return 0; }
