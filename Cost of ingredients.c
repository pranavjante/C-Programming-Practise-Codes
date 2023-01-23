#include<stdio.h>
int main()
{   int i;
    int ingredients;
    float array[4];
    float requirement[4];
    float Totalcost=0;
    float Net=0;
    printf("Enter the no. of ingredients:");
    scanf("%d",&ingredients);
    for(i=0;i<ingredients;i++)
    {
        printf("\nEnter the price of ingredient %d:",i+1);
        scanf("%f",&array[i]);
    }
    for(i=0;i<ingredients;i++)
    {
        printf("\nRequirement of ingredient %d is:",i+1);
        scanf("%f",&requirement[i]);
    }
    for(int i=0;i<ingredients;i++)
    {
        
        Net=(array[i]*requirement[i]);
        Totalcost= Totalcost + Net;
        
    }
    printf("The total cost is: %f",Totalcost);
    return 0;
}
