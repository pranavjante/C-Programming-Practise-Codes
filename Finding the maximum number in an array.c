#include<stdio.h>
int main()
{
    int ages[10];
    int agemax=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&ages[i]);
        if(agemax<ages[i])
        {
            agemax=ages[i];
        }
    }
    printf("The maximum age is %d",agemax);
    return 0;
}
