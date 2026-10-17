 #include<stdio.h>
                        //  input only odd no
 int main() 
 {
     int n;
        printf("Enter number of row:");
           scanf("%d",&n);
       int a=1;
              for(int i=1;i<=n;i++)
     {
           
          for(int j=1;j<=i;j++)
        {            
              printf("%d ",a);
                 // a=a+2;
                    a++;
        }
                        printf("\n");
    }   
                          return 0;
}
                
            
                
       
