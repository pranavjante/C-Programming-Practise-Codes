#include<stdio.h>
int main()
{
    int num;
    int array[10];
    array[0]=500;
    array[1]=180;
    array[2]=650;
    array[3]=25;
    array[4]=666;
    array[5]=42;
    array[6]=421;
    array[7]=1;
    array[8]=370;
    array[9]=211;
    printf("Enter a number:");
    scanf("%d",&num);

    printf("\nThe quantity of entered number is:%d",array[num]);

    return 0;
}
