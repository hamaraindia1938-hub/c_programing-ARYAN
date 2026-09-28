 #include<stdio.h>
 int main(){
   int n,p;
   printf("Enter a number:");
   scanf("%d",&n);
//    int lastdigit = 0;
int r=0;
   // while(n!= 0) 
   p =n;
 while(p>0)  {
//    lastdigit = n%10;
r = r*10;
r = r+ (p%10);
p=p/10;  }
// printf("%d",lastdigit)

r = r + n;
 printf("%d",r);
    return 0;}