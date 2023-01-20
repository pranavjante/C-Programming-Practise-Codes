#include<stdio.h>
int main()
{
    int num,i;
    int pop[6],cities=0;
    int n;
    printf("Enter the no. of cities:");
    scanf("%d",&num);
    for(int i=0; i<num; i++)
    {
        //printf("Enter the population of cities:");
        scanf("%d",&pop[i]);
        
    }
    for(int i=0; i<num; i++)
    {
    if(pop[i]>10000)
        {
        
            cities++;
            
            //printf("\n%d",i);
        }
    }
    printf("Total cities with population above 10000 are:%d",cities);
    return 0;
}
