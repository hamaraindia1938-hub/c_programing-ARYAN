#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
   // ternary operatior
   // exp1 ? exp2 :exp3
   n%2==0 ? printf("even number") : printf("odd number");
    //     if(n%2==0){
   //         printf("Even number");}
  //     else
 //         printf("odd no"); 
 return 0;
}