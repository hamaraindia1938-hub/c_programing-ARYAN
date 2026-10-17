  #include<stdio.h>
  int main()
{           
    int r;
         printf("Enter no of row:");
              scanf("%d",&r);
                  int nsp=r/2;
                       int nst=1;
                             for(int i=1; i<=r;i++)
       {       
                                   for(int j=1; j<=nsp; j++)
                      {                   
                                       printf(" ");
                    } 
                                    for(int k=1;k<=nst;k++)
                    { 
                                printf("*");
                    }      
                              printf("\n"); 
                         if(i<(r/2)+1) 
                          {nsp--;
                          nst+=2;}
                    else
                   { nsp++;
                    nst=nst-2;}
        }
     
        return 0;
                       
                              
}
                    
                      
                        
                  
                    
                  
                            
                           
                  
            