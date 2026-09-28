 #include<stdio.h>
 int main(){
   int n;
   printf("Enter a number:");
   scanf("%d",&n);
//    int lastdigit = 0;
int r=0;
   // while(n!= 0) 
 while(n>0)  {
//    lastdigit = n%10;
r = r*10;
r = r+ (n%10);
n=n/10;  }
// printf("%d",lastdigit)
 printf("%d",r);
    return 0;}