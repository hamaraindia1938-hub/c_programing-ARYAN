#include <stdio.h>
 int main(){
     int sp,cp;
     printf("cost price and selling price:");
     scanf("%d %d",&cp,&sp);
     if(sp>cp)
     printf("profit");
     if(cp>sp)
     printf("loss");
    if(cp==sp)
    printf("neither profit nor loss");
    return 0;
 }