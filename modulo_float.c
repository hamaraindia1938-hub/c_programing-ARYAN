#include<stdio.h>
int main(){
    float a = 5 , b = 2;
    int c;
    c = a%b; // error ayega kyuki modulo int ke sath kam mrta hai float ke sath nhi a and b dono float hai esliye a and b ke sath modulo kam nhi kr rha hai
    
    printf("%d", c);
    return 0;
}