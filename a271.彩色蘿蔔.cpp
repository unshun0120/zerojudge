#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	int total, x, y, z, w, n, m, po=0, i, j, type;
	bool die = false;
	string str;
	cin >> total;
	while( total )
	{
		cin >> x >> y >> z >> w >> n >> m;
		getline( cin , str );	//	用兩次因為有一個是讀到'\n' 
		getline( cin , str );
  		
		if( str.length() == 0 )
		{
			cout << m << "g\n";
			continue;
		}
		
		stringstream ss(str);
  		die = false;
  		po = 0;
		
		while( ss >> type )
		{
			m -= po * n;	//poison
			if( m <= 0 )
			{
				die = true;
				break;
			}
			
			if( type == 1 )
			{
				m += x;
			}
			else if( type == 2 )
			{
				m += y;
			}
			else if( type == 3 )
			{
				m -= z;
				if( m <= 0 )
				{
					die = true;
					break;					
				}
			}
			else if( type == 4 )
			{
				m -= w;
				if( m <= 0 )
				{
					die = true;
					break;
				}
				po++;	
			}
		}
		if( die == true )
			cout << "bye~Rabbit\n";
		else 
			cout << m << "g\n";
			
		total--;	
	}
	
}
