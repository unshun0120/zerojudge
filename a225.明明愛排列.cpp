#include<iostream>
using namespace std;

int main()
{
	int n, i, j;
	
	while( cin >> n )
	{
		int arr[n];

		for( i = 0; i < n; i++ )
			cin >> arr[i];
		for( i = n-1; i > 0; i-- )
		{
			for( j = 0; j < i; j++ )
			{
				if( arr[j] % 10 > arr[j+1] % 10 || arr[j] % 10 == arr[j+1] % 10 && arr[j] < arr[j+1] )
					swap( arr[j] , arr[j+1] );
			}	
		}
		
		for( i = 0; i < n; i++ )
			cout << arr[i] << " ";
		cout << endl;
		
	}
	
	
	
}
