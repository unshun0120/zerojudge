#include<iostream>
using namespace std;

int main()
{
	int n, i, num, d0=0, d1=0, d2=0;
	cin >> n;
	for( i = 0; i < n; i++ )
	{
		cin >> num;
		if( num % 3 == 0 )
			d0++;
		else if( num % 3 == 1 )
			d1++;
		else if( num % 3 == 2 )
			d2++;		
	}
	
	cout << d0 << " " << d1 << " " << d2;
	
	
	
	
}
