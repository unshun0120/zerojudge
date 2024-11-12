#include<iostream>
using namespace std;

int main()
{
	int i;
	char let[7];
	cin >> let;
	
	for( i = 0; i < 6; i++ )
	{
		if( let[i] > let[i+1] )
			cout << let[i] - let[i+1];
		else
			cout << let[i+1] - let[i];
	}
	
	
}
