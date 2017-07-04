#include <stdio.h>
int main ()
{
	int ci, li, i, j, lf;
	
	scanf ("%s", &ci)
	scanf ("%s", &li)
	
	for (i=1; i<=ci; i++)
	{
		scanf("%d", &cf)
		for( j=1;  j<=li; j++)
		{
			scanf("%d", &lf)
			if (li=="o")
				i=lf;
				j=cf;

		}
	}
     
		while( lf=="H"&& cf=="H")
		{
			if (lf+1=="H")
				lf=lf+1;
			if  (lf-2=="H")
				lf=lf-1;
			if (cf+1=="H")
				cf=cf+1;
			if  (cf-2=="H")
				cf=cf-1;
		}
		printf("%d,%d",cf,lf)
	
	return 0;
}