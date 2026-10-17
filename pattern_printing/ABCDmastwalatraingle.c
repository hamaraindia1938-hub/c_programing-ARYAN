 #include<stdio.h>
  int main(){           
    
      int r;
      printf("Enter no of row:");
      scanf("%d",&r);
       for(int i=1; i<=r;i++)
       {      for(int j=1; j<=r-i; j++)
            {     printf(" ");
            }    
                     for(int k=1;k<=i;k++)
                {       int d=k+64;
                            printf("%c",(char)d);
                   }      
            
            printf("\n");
       }
       return 0;
}