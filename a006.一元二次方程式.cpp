#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b, c, check, x, x1, x2;
	cin >> a >> b >> c;
	check = pow( b , 2 ) - 4 * a * c;	//use b^2-4ac check
	if( check < 0 )
		cout << "No real root";
	else if( check == 0 )
	{
		cout << "Two same roots ";
		x = ( b * (-1) ) / ( 2 * a );
		cout << "x=" << x;
	}
	else if( check > 0 )
	{
		cout << "Two different roots ";
		x1 = ( b * (-1) + sqrt( check ) ) / ( 2 * a );
		x2 = ( b * (-1) - sqrt( check ) ) / ( 2 * a );
		if( x1 < x2 )
			swap( x1 , x2 );
			cout << "x1=" << x1 << " , x2=" << x2; 
	}
		
	
}
