 #include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    // 5! = 1*2*3*4*5
    int a = 1,b = 1,sum=1; 
    for(int i = 1; i<=n ; i++){
        a=b;
        b=sum;
        printf("the %d fabonacci no is :%d\n",i,a);
        sum = a+b;}
        // printf("the fibonacci no is :%d",sum);
 return 0;}