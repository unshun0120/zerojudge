#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	bool find=false;
	int n, m, i, j, bit, num, sum=0, div;
	cin >> n >> m;
	for( i = n; i <= m; i++ )
	{
		num = i;
		bit = 0;
		sum = 0;
		while( num != 0 )	// count位數 
		{
			num /= 10;
			bit++;
		}	
		
		num = i;
		while( num != 0 )	// check阿姆斯壯數 
		{
			div = num % 10;
			num /= 10;
			sum += pow( div , bit );
		}
		
		if( sum == i )
		{
			cout << i << " ";
			find = true;
		}
	}
	
	if( find == false )
		cout << "none";

		

} 	 
