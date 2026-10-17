 #include<stdio.h>
//  #include<math.h>
 int main() {
    int n ;
    printf("Enter a no:");
    scanf("%d",&n);
    int digit,sum=0;
    int p=n;
    while(n>0){
    digit = n%10;
    sum = sum + (digit*digit*digit);
    // sum = sum + pow(digit,3);
    n=n/10;}
    if(sum==p)
    printf("%d is Armstrong no ",p);
    else 
    printf("%d is not Armstrong no",p);
return 0;
       

        
        
        
 }