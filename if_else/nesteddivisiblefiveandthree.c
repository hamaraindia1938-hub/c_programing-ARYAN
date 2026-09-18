#include <stdio.h>
int main(){
    int n; 
    printf("Enter a number:"); 
    scanf("%d",&n);
    if(n%5==0){
        if(n%3==0)
        printf("div by both");
    else
    printf("not div by both");
    }
    else
    printf("not div by both");
return 0; 
       
       
}