#include<iostream>
using namespace std;

int cir( int n )
{
	if( n == 1 )
		return 2;
	else
		return cir( n - 1 ) + ( n - 1 ) * 2;
}

int main()
{
	int n, res;
	while( cin >> n )
	{
		res = cir(n);
		cout << res <<endl;
	}
	
}


