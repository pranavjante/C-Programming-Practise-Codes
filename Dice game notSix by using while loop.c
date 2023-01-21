#include<stdio.h>
int main()
{
    int diceValue;
    int notSix;
    printf("Enter the value on dice:");
    scanf("%d",&diceValue);
    notSix= diceValue != 6;
    while(notSix)
    {
        printf("Enter the value on dice:");
        scanf("%d",&diceValue);
        notSix= diceValue != 6;
    }
    printf("Game Over!");
    return 0;
}
