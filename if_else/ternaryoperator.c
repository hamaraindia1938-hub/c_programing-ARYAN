 #include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three number:");
    scanf("%d%d%d",&a,&b,&c);
   // ternary operatior
   // exp1 ? exp2 :exp3
   (a>b && a>c) ? printf("%d is greatest",a) :(b>c && b>a) ? printf("%d is greatest",b):
   printf("%d is greatest",c);
   return 0;}
   