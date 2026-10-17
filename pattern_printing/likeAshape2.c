  #include<stdio.h>
  int main()
  {           
      int r;
          printf("Enter no of row:");
              scanf("%d",&r);
                 int nst=r;
                    int nsp=1;
                       int p=1;
                         int q=1;
                         int l=r-1;
               
                             int c=1;
                                for(int n=1;n<=(2*r)+1;n++)
                        {          printf("%d",c);
                                      if(n<=r)
                                         c++;
                                           else  c--;
                         }
                                                printf("\n");
                                                    
                                                       for(int i=1; i<=r;i++)
                {                                                          int a = 1;
                              
                       
                                                                 for(int j=1; j<=nst; j++)
                                           {                
                                                                         printf("%d",a);
                                                                              a++;
                                            }    
               
                                                                                      for(int k=1;k<=nsp;k++)
                                                           {
                                                                                    printf(" ");
                                                                                    a++;
                                    
                                                            }  
                                                                               for(int m=1;m<=nst;m++)
                                           {
                                                                            a=a-(2*p);
                                                                           printf("%d",a);
                                                                          a=a+(2*q)+1;
                                                                         q++;
                                                                        p++;
                                             }      
                                                                      printf("\n");
                                                                    nsp+=2;
                                                                 nst--;
                                                                
                                                                p-=l;
                                                            q-=l;
                                                            l--;
                }
                                             return 0;
    }
                                                              
                                                            
                                                        
                                                        
                                   
                                                     
                                                 
                                                  
            
                                        
                                        

                               
                                 
                                        
                        
                                               
           

            
            
              
              
           
              
 
 
                 