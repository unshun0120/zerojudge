#include<iostream>
using namespace std;

int main()
{
	long n1, n2;
	cin >> n1 >> n2;
	while( n1 != 0 && n2 != 0 )
	{
		if( n1 > n2 )
		{
			n1 %= n2;
		}
		else
		{
			n2 %= n1;
		}
	}
	if( n1 == 0 )
		cout << n2;
	else
		cout << n1;
	
	
		
} 
