#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{

	vector <int>Super_vector ( 3 );

	cin >> Super_vector[1];
	Super_vector[2] = 9;
	Super_vector[3] = Super_vector[2] - Super_vector[1];

	for ( int i = 1; i <= 3; i++ )
	{
		cout << Super_vector[i] << "";
	}

	return 0;
}
