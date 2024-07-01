
#include <iostream>
using namespace std;

void SWnum(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}

int main()
{
	
	int so [5];
	for (int i = 0; i< 5 ; i++)
	{
		cout <<"nhap so thu "<< i << ":";
		cin >> so[i];
	}
	for (int x : so)
		cout << x << " ";
	int vitriMax = 0;
	int soMax = 0;
	for (int  i = 0; i < 5 ; i++)
	{
		if (soMax < so[i])
		{
			soMax = so[i];
			vitriMax = i;
		}
		
		
	}
	SWnum(so[0], so[vitriMax]);
	{
		cout << "\nSaukhiWap \n";
 
	}
	for (int i : so)
	{
		cout << i << " ";
	}
	return 0;
}
