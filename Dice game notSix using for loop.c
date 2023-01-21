#include<stdio.h>
int main()
{
    int diceValue;
    int notSix;
    printf("Enter the value on dice:");
    scanf("%d",&diceValue);
    for(int i=0; i=diceValue !=6; i++)
    {
        printf("Enter the value on dice:");
        scanf("%d",&diceValue);
    }
    printf("Game Over!");
    return 0;
}
