#include<stdio.h>

int main()
{
    int rad;
    float PI=3.14, area, circumference;
    scanf("%d", &rad);

    area=PI*rad*rad;
    printf("\n Area of Circle:%f",area);

    circumference=2*PI*rad;
    printf("\ncircumference:%f", circumference);

    return 0;

}