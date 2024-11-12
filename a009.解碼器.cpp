#include<iostream>
#include<string>
using namespace std;

int main()
{
	int lens, i;
	string str, newstr;
	cin >> str;
	lens = str.length();
	for( i = 0; i < lens; i ++ )
	{
		str[i] -= 7;
		cout<<str[i];
	}
	
}
