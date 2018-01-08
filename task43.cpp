#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    string inpText;
    int col1=0 ,colMax=0;

    cin >> inpText;

    for (int i =0; i < inpText.size(); i++)
    {
		if (inpText[i] == '0')
		{
			col1++;
		}
		else
		{
			if (col1 > colMax)
			{
				colMax = col1;
			}
			col1 = 0;
		}
    }
	if (col1 > colMax)
	{
		colMax = col1;
	}

	cout << colMax;

	return 0;
}
