#include<iostream>
using namespace std;

int main()
{
	long a, b, n, r, i, re;
	
	while( cin >> a >> b >> n )
	{
		cout << a / b << ".";
	
		re = a % b;	
		for( i = 0; i < n; i++ )
		{
			re *= 10;
			cout << re / b;
			re %= b;
		}
		cout << endl;
	}
	
	
	
	
		
}
