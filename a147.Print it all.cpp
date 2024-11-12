#include<iostream>
using namespace std;

int main()
{
	int n, i;
	
	while( cin >> n )
	{
		if( n == 0 )
			break;
		
		for( i = 0; i < n; i++ )
		{
			if( i % 7 != 0 )
				cout << i << " ";
		}
		
		cout << endl;
		
	} 
	
	
	
}
