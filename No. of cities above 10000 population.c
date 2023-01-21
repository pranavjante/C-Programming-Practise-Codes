#include<stdio.h>
int main()
{
    int num;
    int pop[10];
    int cities=0;
    printf("Enter the no. of cities:");
    scanf("%d",&num);
    for(int i; i<num; i++)
    {
        printf("Enter the population of cities:");
        scanf("%d",&pop[i]);
        if(pop[i]>10000)
        {
            cities++;
        }
    }
    printf("The no. of cities having population above 10000 are %d.",cities);
    return 0;
}
