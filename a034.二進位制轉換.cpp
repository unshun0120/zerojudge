#include<iostream>
using namespace std;

int main()
{
	int n, i, index;
	while( cin >> n )
	{
		int bin[1000];
		index = 0;
		while( n != 1 )
		{
			bin[ index ] = n % 2;
			n /= 2;
			index++;
		}
		bin[ index ] = 1;
		index++;
		for( i = index - 1; i >= 0; i-- )
			cout << bin[i];
		cout << endl; 
	}
	
	
}
