 #include<stdio.h>
 int main(){ // sum of even place 
   int n;
   printf("Enter a number:");
   scanf("%d",&n);
   int sum = 0;
   int lastdigit = 0;
   int position =1;
   while(n!= 0){
    
       lastdigit = n%10;
       if(position%2==0){
       sum = sum + lastdigit;}
       position++;
   n=n/10;    }
    printf("the sum of digit is %d ",sum);
      return 0;}