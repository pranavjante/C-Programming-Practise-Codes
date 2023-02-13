#include <stdio.h>
int main() 
{
    int i=0;
    char name[50];
    printf("Enter the name:");
    scanf("%s",name);
    while(name[i]!='\0')
    {
        i++;
    }
    printf("%s has %d number of letters.",name,i);
    if(i%2==0)
    {
        printf("\nThe word has even numbers of letters.");
    }
    else
    {
        printf("\nThe word has odd numbers of letters.");
    }
    return 0;
}
