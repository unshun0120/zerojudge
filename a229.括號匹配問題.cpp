#include<iostream>
using namespace std;

int n;

void paren( string str, int left, int right )
{
	if( right == n )
		cout << str << "\n";
	else
	{
		if( left < n )
			paren( str + "(", left + 1, right );
		if( left >= right + 1 )	
			paren( str + ")", left, right + 1 );
	}
}

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
	
	while( cin >> n )
	{
		paren( "(", 1, 0 );
		cout << "\n";			
	}	
	
} 
