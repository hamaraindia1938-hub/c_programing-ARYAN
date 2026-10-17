 #include<stdio.h>
 int main () {

    int r;
    printf("Enter no of row:");
    scanf("%d",&r);
    for (int i=1; i<=r; i++)
    {    char a=1;
        for( int  j=1; j<=r; j++){
            int d=a+64;
            printf("%c ",(char)d);
            a++;
        }
        printf("\n");

    }

return 0;
}