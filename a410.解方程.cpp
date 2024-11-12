#include<stdio.h>

int main()
{
	float x, y, del, delx, dely;
	int a, b, c, d, e, f;
		
	scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f );
	 
	del = a * e - d * b ; 	
	delx = c * e - f * b ;
	dely = a * f - d * c ;
	x = delx / del;
	y = dely / del;
	
	if( del != 0 )
		printf("x=%.2f\ny=%.2f\n", x, y);
	else if( del == 0 )
	{
		if( delx != 0 || dely != 0 )
			printf("No answer\n");
		else
			printf("Too many\n");
	}
	
	
} 


/* 	use 克拉馬公式 	*/ 
