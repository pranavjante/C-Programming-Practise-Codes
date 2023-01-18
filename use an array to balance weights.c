#include<stdio.h>
int main()
{
    int boxcars;
    int array[5];
	int avg=0;
	int net;
    for(int i=0;i<5;i++)
    {
        printf("Enter the %d element of the array:",i);
        scanf("%d",&array[i]);
    }
    printf("Enter the number of boxcars:");
    scanf("%d",&boxcars);

    avg=(array[0]+array[1]+array[2]+array[3]+array[4])/boxcars;
    //printf("%d",avg);
	for(int i=0;i<5;i++)
	{
	    net=avg-array[i];
		printf("\n%d",net);
	} 
    return 0;
}
