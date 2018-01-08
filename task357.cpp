#include <iostream>
using namespace std;
int main()
{   int X = 0, Y = 0, k = 0, i = 0;
    while ( cin.peek() != '\n' )
    {   k= getchar()-48;
        i++;
        if ( ! ( i % 2 ) )
            X += k ;
        else
           Y += k ; }
    if ((abs(X-Y))%11) cout << "NO";
    else cout << "YES";
    return 0;
}
