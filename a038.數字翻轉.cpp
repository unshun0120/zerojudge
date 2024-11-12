#include<iostream>
#include<string> 
using namespace std;

int main()
{
	int lens, index, i;
	string arr;
	cin >> arr;
	
	if( arr[0] == '0')
		cout << "0";
	else
	{
		lens = arr.length();
		index = lens;
		for( i = lens - 1; i >= 0; i-- )
		{
			if( arr[i] != '0' )
			{
				index = i;
				break;
			}
		}
		
		for( i = index ; i >= 0; i-- )
			cout << arr[i];
	}
		
	
	
}
