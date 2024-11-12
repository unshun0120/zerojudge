#include<iostream>
using namespace std;

int main()
{
	int n, i=2, temp=0, first=1;
	cin >> n;
	while( n != 1 )
	{
		while( n % i == 0 )
		{
			n /= i;
			temp++;
		}
		if( temp != 0 )
		{
			if( first )
			{
				if( temp == 1 )
					cout << i;
				else if( temp > 1 )
					cout << i << "^" << temp;
				first = 0;
			}
			else 
			{
				if( temp == 1 )
					cout << " * " << i;
				else if( temp > 1 )
					cout << " * " << i << "^" << temp;	
			}
		}
		temp = 0;
		i++;
		
	
	}
	
}
