#include<stdio.h>
int main() {
    float p,r,t,si; // 4 dabbe create ho jate hai abb sbke liye float likhne ka jarurt nhi hai 
    printf("Enter p:");
    scanf("%f",&p);
    printf("Enter r:");
    scanf("%f",&r);
    printf("Enter t:");
    scanf("%f",&t);
    si = (p*r*t)/100;
    printf("%f",si);
    return 0;


}
