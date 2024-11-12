#include<iostream>
using namespace std;

int main()
{
	int pass[4], code[4];
	int n, i, j, p, q, k;
	
	ios::sync_with_stdio(false);
    cin.tie(0);
	
	while( cin >> pass[0] >> pass[1] >> pass[2] >> pass[3] )	//input correct password
	{
		cin >> n;
	
		for( i = 0; i < n; i++ )
		{
			int checkpass[4], checkcode[4];
				
			p = q = 0;
			
			for( j = 0; j < 4; j++ ) 	//input¹Á¸Õªºpassword 
				cin >> code[j];
				
			for( j = 0; j < 4; j++ )
			{
				checkpass[j] = checkcode[j] = 0;
				if( pass[j] == code[j] )
				{
					p++;
					checkpass[j] = checkcode[j] = 1;
				}	
			}	
			
			for( j = 0; j < 4; j++ )
			{
				if( checkpass[j] == 0 )
				{
					for( k = 0; k < 4; k++ )
					{
						if( code[k] == pass[j] && checkcode[k] == 0 )
						{
							q++;
							checkpass[j] = checkcode[k] = 1;
							break;
						}
					}
				}
			}
			
			cout << p << "A" << q << "B" << "\n";
			
		}
		
	}

	
	
}
