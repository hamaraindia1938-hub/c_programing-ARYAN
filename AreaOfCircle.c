#include<stdio.h>
int main(){
    float Radius;
    printf("Entre Radius:");
    scanf("%f",&Radius);
    float pi = 3.1415;
    float A = pi * Radius * Radius;
    printf("The Area is : %f",A);
    return 0;
}