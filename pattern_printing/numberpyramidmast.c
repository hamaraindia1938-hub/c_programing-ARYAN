  #include<stdio.h>
  int main(){           
    //   same code se solid traingle banaya ja skta hai star ke pass ek space lga kr
      int r;
      printf("Enter no of row:");
      scanf("%d",&r);
      
       for(int i=1; i<=r;i++)
      { int a=i-1;
           
         for(int j=1; j<=r-i; j++)
            {     printf(" ");
            }    
            for(int k=1;k<=i;k++)
               { 
            //   int  d=k+64;
            //   printf("%c",(char)d);
                   printf("%d",k);
               }  
               for(int m=1;m<=i-1;m++)
               {
            //    int e=a+64;
            //     printf("%c",(char)e);
                  printf("%d",a);
                 
                  a--;
               
               }  
               printf("\n");
              
       }
          return 0;
   }     
                 
                              
                           
                  
            
       