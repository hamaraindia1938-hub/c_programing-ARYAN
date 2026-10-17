#include <stdio.h>
int main(){
   int n,copy;
   printf("Enter a number:");
   scanf("%d",&n);

   copy =n;
int r=0,rev;
   
 while(copy>0)  {

r = r*10;
r = r+ (copy%10);
copy=copy/10;  }

rev=r;

 if(n==rev)
 printf("the no %d is palidrome no:",n);
else
printf("the no %d is not palidrome no:",n);
    return 0;}
