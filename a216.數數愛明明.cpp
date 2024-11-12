#include<iostream>
using namespace std;

long f( long n )
{
	if( n == 1 )
		return 1;
	else
		return n + f( n - 1 );
}

long g( long n )
{
	if( n == 1 )
		return 1;
	else	
		return f(n) + g( n - 1 );
}

int main()
{
	long n, fres, gres;
	
	while( cin >> n )
	{
		fres = f(n);
		gres = g(n);
		
		cout << fres << " " << gres << endl; 
	}
	
	
}
