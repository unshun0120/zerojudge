#include<iostream>
using namespace std;

int main()
{
	int n, m, sum=0, count=0;
	
	while( cin >> n >> m )
	{
		sum = n;
		count = 1;
		while( sum <= m )
		{
			n++;
			sum += n;
			count++;
		}
		
		cout << count << endl;
		
	}
	
	
	
}
