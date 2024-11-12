#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n, i;
	
	while( cin >> n )
	{
		int num[n];
		
		for( i = 0; i < n; i++ )
			cin >> num[i];
		sort( num , num + n );
		for( i = 0; i < n; i++ )
			cout << num[i] << " ";		
		cout << endl;
	}
	
	
	
}
