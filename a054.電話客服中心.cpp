#include<iostream>
using namespace std;

int main()
{
	char arr[9];
	int id[9], i, num=0, c, l1, l2, sum=0;
	int let[26] = { 10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22,
					35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33 };
	cin >> arr;
	
	for( i = 0; i < 9; i++ )
	{
		id[i] = (int)arr[i] - '0';
		if( i != 8 )
			num += id[i] * ( 8 - i );
	}
	
	c = 10 - id[8];		//10 - c = x % 10
	if( c == 10 )	
		c = 0;
		
	for( i = 0; i < 26; i++ )
	{
		sum = 0;
		l1 = let[i] / 10;
		l2 = let[i] % 10 * 9;
		sum = l1 + l2 + num;
		if( sum % 10 == c )
		{
			switch( let[i] )	//change first number to english letter 
			{
				case 10 : cout << "A"; break;
				case 11 : cout << "B"; break;	
				case 12 : cout << "C"; break;
				case 13 : cout << "D"; break;
				case 14 : cout << "E"; break;
				case 15 : cout << "F"; break;
				case 16 : cout << "G"; break;
				case 17 : cout << "H"; break;
				case 34 : cout << "I"; break;
				case 18 : cout << "J"; break;
				case 19 : cout << "K"; break;
				case 20 : cout << "L"; break;
				case 21 : cout << "M"; break;
				case 22 : cout << "N"; break;
				case 35 : cout << "O"; break;
				case 23 : cout << "P"; break;
				case 24 : cout << "Q"; break;
				case 25 : cout << "R"; break;
				case 26 : cout << "S"; break;
				case 27 : cout << "T"; break;
				case 28 : cout << "U"; break;
				case 29 : cout << "V"; break;
				case 32 : cout << "W"; break;
				case 30 : cout << "X"; break;
				case 31 : cout << "Y"; break;
				case 33 : cout << "Z"; break;
			}
		}	
	}
	
		
	
} 
