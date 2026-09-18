#include <stdio.h>
int main(){
int a,b,c;
printf("Enter 1st,2nd,3rd number:");
scanf("%d%d%d",&a,&b,&c);
if(a>b){ // b is out of race
    if(a>c)
printf("%d is greatest",a);
else // a<c -> b<a<c
printf("%d is greatest",c);
}
else{ // b>a -> a ab sbse bada to nhi hai
    if(b>c)
    printf("%d is greatest",b);
    else // c>b ->  a<b<c
    printf("%d is greatest",c);}


return 0;}



