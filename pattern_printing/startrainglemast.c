 #include<stdio.h>
  int main(){           
    //   same code se solid traingle banaya ja skta hai star ke pass ek space lga kr
      int r;
      printf("Enter no of row:");
      scanf("%d",&r);
       for(int i=1; i<=r;i++)
       {      for(int j=1; j<=r-i; j++)
            {     printf(" ");
            }    
                     for(int k=1;k<=i;k++)
                {
                            printf("*");
                   }      
            
            printf("\n");
       }
       return 0;
}