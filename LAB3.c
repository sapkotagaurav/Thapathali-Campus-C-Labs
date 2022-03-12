
//greatest
#include<stdio.h>
void main (){
    int a,b,c,large;
    printf("enter three numbers \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        large=a;
    }
        else if(b>a && b>c){
        large=b;
    }
    else {
        large =c;

    }
    printf("\n the greatest number is %d",large);
}
