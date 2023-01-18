#include <stdio.h>

int main() 
{
    int array[3];
    int cellnumber=0;
    int readvalue;
    for(int i=0;i<3;i++)
    {   
        printf("\nEnter a number:");
        scanf("%d",&readvalue);
		array[i]=readvalue;
        printf("Cellnumber %d contains %d",cellnumber,array[i]);
        cellnumber=cellnumber+1;
    }

    return 0;
}
