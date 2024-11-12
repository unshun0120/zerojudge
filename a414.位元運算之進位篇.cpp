#include<iostream>
using namespace std;

int main()
{
	int n, re, count=0;
	
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    
	while( cin >> n )
	{
		if( n == 0 )
			break;
		count = 0;
		
		while( n % 2 )
		{
			count++;
			n /= 2;
		}

		cout << count << "\n"; 
		
	}
	
	
	
}
