 #include<stdio.h>
                        //  input only odd no
 int main() 
 {
     int r,c;
           printf("Enter number of row and column:");
                scanf("%d %d",&r,&c);
                     for(int i=1;i<=r;i++)
     {
                          for(int j=1;j<=c;j++)
        {
                       if(i==1 || j==1)  
                    printf("*");
                 else if (i==r || j==c)
               printf("*");
             else
           printf(" ");
      }
        printf("\n");
  }
     return 0;
}