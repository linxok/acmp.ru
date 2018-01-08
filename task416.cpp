#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main()
{
    string n;
    cin >>n;

    for (int i=1; i<=8; i++)
    {
        for (int j= 1; j<= 8; j++)
        {
            if ((abs(((n[0]- 96)-j) * ((n[1]-48)-i))) == 2 )
            {
                cout << (char)(j+96) << (char)(i+48)<< endl;

            }
        }
    }

    return 0;
}
