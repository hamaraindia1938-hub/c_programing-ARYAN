 #include<stdio.h>
//  #include<math.h>
int main(){
    int a,b;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    int power=1 ;
  for( int i = 1; i<=b ; i++){
    power=power*a;
    //  power= pow(a,b);
  }
printf(" =%d\n ",power);
 return 0;}
    