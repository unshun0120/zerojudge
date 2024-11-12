#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b, i, j, count=0;
	
	while( cin >> a >> b )
	{
		count = 0;
		for( i = a; i <= b; i++ )
		{
			if( i == 2 )
			{
				count++;
				continue;
			}
			for( j = 2; j <= sqrt(i); j++ )
			{
				if( i % j == 0 )
					break;
			}
			if( j > sqrt(i) )
				count++;
		}
		if( a == 1 )
			count--;
		cout << count << endl;
	}
	
}
