#include <stdio.h>
int main() 
{
    int repetitions;
    char word[100];
    printf("Enter the number of times the word should be repeated:");
    scanf("%d",&repetitions);
    printf("Enter the word:");
    scanf("%s",word);
    for(int i=0;i<repetitions;i++)
    {
        printf("%s\n",word);
    }
    return 0;
}
