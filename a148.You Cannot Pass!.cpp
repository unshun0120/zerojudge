#include<iostream>
using namespace std;

int main()
{
	int n, i, num;
	float sum=0;
	
	while( cin >> n )
	{
		sum = 0;
		for( i = 0; i < n; i++ )
		{
			cin >> num;
			sum += num;
		}
		
		if( sum / n > 59 )
			cout << "no" << endl;
		else 
			cout << "yes" << endl; 
		
	} 
	
	
}
