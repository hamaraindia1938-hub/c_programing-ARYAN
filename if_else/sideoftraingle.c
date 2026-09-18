#include <stdio.h>
int main(){
    int a,b,c; 
    printf("Enter 1st,2nd,3rd number:"); 
    scanf("%d %d %d",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (a+c) >b)
    printf("a,b,c size of traingle");
    else
    printf("not traingle");
return 0; 
      
       
}

