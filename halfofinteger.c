#include<stdio.h>
int main()
{
    float x;
    printf("Enter a decimal NO:");
    scanf("%f",&x); // Enter a decimal no
    int y = x;
    printf("%d\n",y);
    float z = x - y;
    printf("%f",z);
    return 0;


}