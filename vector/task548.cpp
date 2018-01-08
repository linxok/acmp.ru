#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;
/*

int main()
{
    queue<char> myqu;
    queue<char> myqu1;
    queue<char> myqu2;
    char s1[256];
    char s2[256];
    scanf("%s", s1);
    scanf("%s", s2);

    for(int i=0; s1[i]; i++)
    {
        myqu1.push(s1[i]);
    }

    for(int i=0; s2[i]; i++)
    {
        myqu2.push(s2[i]);
    }
    while ((!myqu1.empty()) && (!myqu2.empty()) )
    {
        if (myqu1.front()>=myqu2.front())
        {
            myqu.push(myqu2.front());
            myqu2.pop();
        }
        else
        {
            myqu.push(myqu1.front());
            myqu1.pop();
        }
    }
    if (myqu1.empty())
    {
        while (!myqu2.empty())
        {
            myqu.push(myqu2.front());
            myqu2.pop();
        }
    }
    else
    {
        while (!myqu1.empty())
        {
            myqu.push(myqu1.front());
            myqu1.pop();
        }
    }

    while (!myqu.empty())
    {
        cout << myqu.front();
        myqu.pop();
    }


    return 0;
}
