 #include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    // 5! = 1*2*3*4*5
    int product ;
    for( int i = 1; i<=10 ; i++){
        product = n*i;
    
 

printf("%d * %d=%d\n ",n,i,product);}
 return 0;}