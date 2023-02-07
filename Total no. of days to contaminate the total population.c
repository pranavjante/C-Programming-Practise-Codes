#include <stdio.h>
int main() 
{
    int totalPopulation=3;
	int day=0;
    int newInfectedPeople=1;
    int totalInfectedPeople=1;
    while(newInfectedPeople<=totalPopulation)
    {
		day++;
        newInfectedPeople=2*newInfectedPeople;
        totalInfectedPeople=totalInfectedPeople+newInfectedPeople;
        printf("Day %d New Infected People are %d and Total Infected People are %d.\n",day,newInfectedPeople, totalInfectedPeople);
    }
    return 0;
}
