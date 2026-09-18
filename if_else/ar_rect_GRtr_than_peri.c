#include <stdio.h>
int main(){
    float l,b,a,p;
    printf("given the length and breath:");
    scanf("%f %f",&l,&b);
    a = (l*b);
    p = 2*(l+b);
    if(a>p)
      printf("a greater than p");
    else
    printf("p greater than a");
return 0;
}

