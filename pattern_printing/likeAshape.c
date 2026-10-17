  #include<stdio.h>
  int main()
  {           
      int r;
          printf("Enter no of row:");
              scanf("%d",&r);
                 int nst=r;
                    int nsp=1;
               
                          for(int n=1;n<=(2*r)+1;n++)
           {
                              // printf("*");
                                //   printf("%d",n);
                                       int d=n+64;
                                         printf("%c",(char)d);
                }
                                            printf("\n");
                                              for(int i=1; i<=r;i++)
                {        
                                                 //int a=1;
                                                    int a=65; 
                                                       for(int j=1; j<=nst; j++)
                    {                
                                                           //printf("*");
                                                              //printf("%d",a);
                                                                  printf("%c",(char)a);
                                                                    a++;
                    }    
                                                                        for(int k=1;k<=nsp;k++)
                       {
                                                                      printf(" ");
                                                                 a++;
                        }  
                                                             for(int m=1;m<=nst;m++)
                            {
                                                          //  printf("*");
                        
                                                    //   printf("%d",a);
                                                    printf("%c",(char)a);
                        
                                                 a++; 
                            }      
                                              printf("\n");
                                         nsp+=2;
                                     nst--;
            }
                                return 0;
     }
           

            
            
              
              
           
              
 
 
                 