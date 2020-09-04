#include<iostream>
#include<math.h>
using namespace std;

void ymx(int x, int i, int n)
{
	while (i < n)
	{

		cout << pow(x, x) << " ";
		x++;
		i++;
	}
}
void xmy(int y, int i, int n)
{
	while (i < n)
	{

		cout << pow(y, y) << " ";
		y++;
		i++;
	}
}

int main()
{
	int x , y,i = 0;
	cout << "Enter first number :";
	cin >> x;
	cout << "Enter second number :";
	cin >> y;
	int n = (abs(x - y)) + 1;

	if (x < y)
	{
		ymx(x, i, n);
	}
	if (y < x)
	{
		xmy(y, i, n);
	}
	if (x == y)
	{
		cout << pow(x, x) << " ";
	}
		
}