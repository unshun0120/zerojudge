#include<iostream>
using namespace std;

int main()
{
	int t, i, j, k, num[4];
	cin>>t;
	for( i = 0; i < t; i ++ )
	{
		for( j = 0; j < 4; j ++ )
			cin >> num[j];
		if( ( num[1] - num[0] ) == ( num[2] - num[1] ) && ( num[2] - num[1] ) == ( num[3] - num[2] ) )	//µ¥®t 
		{
			for( k = 0; k < 4; k ++ )
				cout << num[k]<<" ";
			cout << num[3] + ( num[3] - num[2] ) << endl;
		}
		else if( ( num[1] / num[0] ) == ( num[2] / num[1] ) && ( num[2] / num[1] ) == ( num[3] / num[2] ) )	//µ¥¤ñ 
		{
			for( k = 0; k < 4; k ++ )
				cout << num[k]<<" ";
			cout << num[3] * ( num[3] / num[2] ) << endl;
		}
	}
}
