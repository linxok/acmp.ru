#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    string N = "0000";
    int X = 4321;

    N[0] =  (X/1000)+48;
    N[1] =  (X/100 %10 )+48;
    N[2] =  (X/10 %10)+48;
    N[3] =  (X %10)+48;

cout << N;
    return 0;
}
