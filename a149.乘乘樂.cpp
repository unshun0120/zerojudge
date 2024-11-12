#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int t, num, re, sum=1, i;
	
	cin >> t;
	while( t != 0 )
	{
		char arr[1000];
		cin >> arr;
		sum = 1;
		for( i = 0; i < strlen( arr ); i++ )
		{
			sum *= ( int )arr[i] - '0';
		}
		
		cout << sum << endl;
		
		t--;
	}
	
	
	
}
