#include<iostream>
using namespace std;

int main()
{
	int n, i, sum=1;

	while( cin >> n )
	{
		sum = 1;
		for( i = 1; i <= n; i++ )
		{
			sum += ( 1 + i * ( i - 1 ) / 2 );
		}
		cout << sum << endl;
	}
	
	
	
}
