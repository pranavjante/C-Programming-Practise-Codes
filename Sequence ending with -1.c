#include <stdio.h>
int main() 
{
    int sum=0, Value;
    printf("Enter a value:");
    scanf("%d",&Value);
    while(Value!=-1)
    {
        sum=sum+Value;
		scanf("%d",&Value);
	}
	printf("Sum=%d",sum);
    return 0;
}
