 #include<stdio.h>
 int main () 
{
    int r;
    printf("Enter no of row:");
    scanf("%d",&r);
    for (int i=1; i<=r; i++)
    {    char a=1;
             for( int  j=1; j<=i; j++)
        {         int d=a+64;
                    if(i%2==0)
                       printf("%c ",(char)d);
                           else
                             printf("%d ",j);
                                a++;
        }
                                   printf("\n");
    }
                                        return 0; 
}

