#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int  M, N;
	cin >> N >> M;
	int Y=0;
	int X = N / M;
	if (M > N)
	{
		for (int i =0; i <M-N; i++) cout << "0" << " ";
		for (int i =0; i <N; i++) cout << "1" << " ";
	}
	else
	{
	for (int i=1; i <M; i++)
	{
		Y += X;
		cout << X << " ";
	}
	cout << N - Y;
	}
	return 0;
}
