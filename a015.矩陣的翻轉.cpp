#include<iostream>
using namespace std;

int main()
{
	int r, c, i, j;
	while( cin >> r >> c )
	{
		int matr[r][c], res[c][r];
		
		for( i = 0; i < r; i++ )	//cin
		{
			for( j = 0; j < c; j++ )
			{
				cin >> matr[i][j];
			}
		}
		
		for( i = 0; i < c; i++ )	//change
		{
			for( j = 0; j < r; j++ )
			{
				res[i][j] = matr[j][i];
				cout << res[i][j] << " ";
			}
			cout << endl;
		}	
	}
	
	
	
} 
