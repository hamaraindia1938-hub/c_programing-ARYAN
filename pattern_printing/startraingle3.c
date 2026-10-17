 #include<stdio.h>
 int main() {
    int n;
    float product=1,sum =0;
    printf("Enter n^th term:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        product = product*i;
        sum = sum+(i/product);
    }
   
    printf("sum= %f",sum);
    return 0;
 }