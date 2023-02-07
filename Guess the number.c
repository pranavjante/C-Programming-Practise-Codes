#include <stdio.h>
int main() 
{    
    int correctNumber;
    int guessedNumber;
    printf("Enter the number to be guessed:");
    scanf("%d",&correctNumber);
    scanf("%d",&guessedNumber);
    while(guessedNumber!=correctNumber)
    {
        if(guessedNumber>correctNumber)
        {
            printf("It is less.\n");
        }
        else if(guessedNumber<correctNumber)
        {
            printf("It is more.\n");
        }
        scanf("%d",&guessedNumber);
    }
	printf("Congratulations you guessed the correct number.");
    return 0;
}
