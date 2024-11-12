#include<iostream>
using namespace std;

int main()
{
	int t, a, b, i, j, k, sum=0;
	cin >> t;
	
	for( i = 0; i < t; i++ )
	{
		cin >> a >> b;
		sum = 0;
		for( j = a; j <= b; j++ )
		{
			for( k = 1; k <= j; k++ )
			{
				if( j == ( k * k ) )
				{
					sum += j;
					break;
				}
			}
		}
		
		cout << "Case " << i+1 << ": " << sum << endl; 
		
	}
	
}
