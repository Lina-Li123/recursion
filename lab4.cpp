#include <iostream>
#include <math.h>
using namespace std;

int sum(int n);

int main()
{
	cout << "Enter n= ";
	int n2;
	cin >> n2;
	cout << "sum(n2)="<<sum(n2)<<endl; 
	system("pause");
}
int sum(int n)
{
	if (n == 1)
		return 2;
	else
		return 2 * sum(n / 2) - 1;
}
