
//fibonacci
# include<stdio.h>
void fib(int a, int b,int n){

    int c;
    if(n<=0)
    return 0;
    else
    {
        c=a+b;
        printf("%d \t",c);

    }
    fib(b,c,n-1);
}
void main ()
{
int a,b,n;
a=1;b=1;
printf("enter the number of terms \n");
scanf("%d",&n);
printf("%d \t %d \t",a,b);
fib(a,b,n-2);
}
