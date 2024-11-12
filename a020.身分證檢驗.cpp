#include<iostream>
#include<string>
using namespace std;
 
int main()
{
	int res=0, num, i;
	char str[10];
	int arr[10];
	cin >> str;
	switch( str[0] )	//change first english word to number  
	{
		case 'A' : num = 10; break;
		case 'B' : num = 11; break;	
		case 'C' : num = 12; break;
		case 'D' : num = 13; break;
		case 'E' : num = 14; break;
		case 'F' : num = 15; break;
		case 'G' : num = 16; break;
		case 'H' : num = 17; break;
		case 'I' : num = 34; break;
		case 'J' : num = 18; break;
		case 'K' : num = 19; break;
		case 'L' : num = 20; break;
		case 'M' : num = 21; break;
		case 'N' : num = 22; break;
		case 'O' : num = 35; break;
		case 'P' : num = 23; break;
		case 'Q' : num = 24; break;
		case 'R' : num = 25; break;
		case 'S' : num = 26; break;
		case 'T' : num = 27; break;
		case 'U' : num = 28; break;
		case 'V' : num = 29; break;
		case 'W' : num = 32; break;
		case 'X' : num = 30; break;
		case 'Y' : num = 31; break;
		case 'Z' : num = 33; break;
	}
	
	res += ( num % 10 ) * 9 + ( num / 10 );
	
	for( i = 1; i < 10; i++ )	//change word to number
	{
		arr[i] = (int)str[i] - '0';
		if( i < 9 )
			res += arr[i] * ( 9 - i );  
	}
	res += arr[9];
	if( res % 10 == 0 )
		cout << "real";
	else 
		cout << "fake";

}

