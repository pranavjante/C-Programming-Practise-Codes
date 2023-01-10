#include <stdio.h>
int sum(int a, int b)// a and b are the parameters
// here int before the sum tells about the type of the return value
{
    int addition;
    addition=a+b;
    return addition;
}
int main() {
    int x,y,result;
    printf("\nEnter two numbers:");
    scanf("%d%d",&x,&y);
    result=sum(x,y); //x and y are the arguments(arguments dont need datatypes) here we dont have to write the datatypes of x and y since we have already written in main()
    printf("result=%d",result);
    return 0;
}
