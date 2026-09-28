 #include<stdio.h> // write a menue derive using basic mathmatic operation 
 int main(){
     int n1,n2,choose;
     printf("Enter two no:");
     scanf("%d%d",&n1,&n2);
     printf("Enter 1 for addtion\n");
     printf("Enter 2 for substraction\n");
     printf("Enter 3 for multiply\n");
     printf("Enter 4 for divide\n");
     printf("Enter your choose:");
     scanf("%d",&choose);
     switch(choose){
case 1: printf("%d",n1+n2);
break;
case 2: printf("%d",n1-n2);
break;
case 3: printf("%d",n1*n2);
break;
case 4: printf("%d",n1/n2);
break;
default: printf("invalid choose ");}

return 0;}