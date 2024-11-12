#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i, j, mond[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int y[2], m[2], d[2], total[2];
	
	while( cin >> y[0] >> m[0] >> d[0] )
	{
		cin >> y[1] >> m[1] >> d[1];
		
		for( i = 0; i < 2; i++ )
		{
			total[i] = d[i];
			for( j = 0; j < y[i]; j++ )
			{
				if( j % 4 == 0 && j % 100 != 0 || j % 400 == 0 )
					total[i] += 366;
				else
					total[i] += 365;
			}
			
			if( y[i] % 4 == 0 && y[i] % 100 != 0 || y[i] % 400 == 0 )
			{
				for( j = 1; j < m[i]; j++ )
				{
					if( j == 2 )
						total[i] += mond[j] + 1;
					else
						total[i] += mond[j];	
				}	
			} 
			else
			{
				for( j = 1; j < m[i]; j++ )
					total[i] += mond[j];
			}
					
		}
		
		cout << abs( total[0] - total[1] ) << endl;
	}

	
}
