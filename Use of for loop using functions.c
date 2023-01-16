#include <stdio.h>
int line(int nline , char pattern)
{
    for(int i=0; i<nline; i++)
    {
        printf("X");
    }
    return nline;
}

int triangle(int ncolns, int nrows)
{
	for(int i=1;i<=ncolns;i++)
	{
		for(int j=0; j< i; j++)
		{
			printf("*");
		}	
		printf("\n");
	}
}
int rectangle(rcolns,rrows)
{
	for(int i=0;i<=rrows;i++)
	{
		for(int j=1;j<=rrows;j++)
		{
			printf("#");
		}
	printf("\n");
	}
}

	
int main() 
{
    	int nline, ncolns, nrows, rcolns, rrows;
    	printf("\nEnter no. of characters:");
    	scanf("%d", &nline);	
	line(ncolns, 'X');
	printf("\nEnter no. of columns:");
	scanf("%d", &ncolns);
	printf("\n");
	triangle(ncolns,nrows);
	printf("\nEnter no. of columns in rectangle:");
	scanf("%d",&rcolns);
	printf("\nEnter no. of rows in rectangle:");
	scanf("%d",&rrows);
	rectangle(rcolns,rrows);
    
    return 0;
}
