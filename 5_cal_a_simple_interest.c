#include<stdio.h>

int main()
{
    int principal, rate, time, interest;
    printf("ENTER THE INTEREST:");
    scanf("%d", &principal);

    printf("ENTER THE RATE:");
    scanf("%d", &rate);

    printf("ENTER THETIME:");
    scanf("%d", &time);

    interest=(principal+rate+time)/100;
    printf("THE SIMPLE INTEREST IS %d", interest);

    return 0;

}