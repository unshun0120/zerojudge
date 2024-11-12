#include<iostream>
using namespace std;

int main()
{
	int n, res=0;
	while( cin >> n )
	{
		res = 0;
		if( n >= 0 && n <= 10 )
			res = n * 6;
		else if( n >= 11 && n <= 20 )
		{
			n -= 10;
			res = 60;
			res += n * 2;	
		}
		else if( n >= 21 && n <= 40 )
		{
			n -= 20;
			res = 80;
			res += n * 1;
		}
		else if( n >= 40 )
			res = 100;
		
		cout << res << endl;
	}
	
	
	
}
