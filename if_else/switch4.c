 #include<stdio.h> // enter day no accordinly the name of the day
 int main(){
     float m1,m2,m3,m4,m5,avg;
     int division;
     printf("marks of MATH:");
     scanf("%f",&m1);
     printf("marks of PHY:");
     scanf("%f",&m2);
     printf("marks of CHE:");
     scanf("%f",&m3);
     printf("marks of CSE:");
     scanf("%f",&m4);
     printf("marks of ECE:");
     scanf("%f",&m5);
     avg = (m1+m2+m3+m4+m5)/5;
     printf("%f is avg marks of five subject\n",avg);
     division = (avg>=90)? 1:(avg<90 && avg>=80)? 2: (avg<80 && avg>=70)? 3:
                (avg<70 && avg>=60)? 4:(avg<60 && avg>=50)? 5:(avg<50 && avg>=40)? 6: 7;
                 
switch(division){
case 1: printf("grade 'O' ");
break;
case 2: printf(" grade 'E' ");
break;
case 3: printf("grade 'A' ");
break;
case 4: printf("grade 'B' ");
break;
case 5: printf("grade 'C' ");
break;
case 6: printf("grade 'D' ");
break;
default: printf("fail ");}

return 0;}