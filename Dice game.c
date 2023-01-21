#include<stdio.h>
int main()
{
    int players;
    int throws;
    int diceValue;
    int sum=0;
    printf("Enter the no. of players and no. of throws:");
    scanf("%d %d",&players,&throws);
    for(int i=0; i<players;i++)
    {
        for(int j=0; j<throws;j++)
        {
            scanf("\t%d",&diceValue);
            sum= sum+ diceValue;
        }
        printf("Throw %d sum equals %d",i,sum);
		sum=0;
    }
    return 0;
}
