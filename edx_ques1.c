#include<stdio.h>
int main()
{
    int n;
    float r,k;
    printf("\nEnter the number of passengers=");
    scanf("%d",&n);
    printf("\nEnter the cost of gas=");
    scanf("%f",&r);
    
    if(n != 0)
    {
        k=(r+1)/(n+1);
        printf("\nYour cost for the trip=%.2f",k);
    }
    else
    {
        printf("\nYour cost of the trip=%.2f",r);
    }
    return 0;
}
