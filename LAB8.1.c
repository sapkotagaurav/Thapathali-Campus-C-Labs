#include<stdio.h>
int main(){
int a,b,c,*p1,*p2,*p3;
printf("enter 3 numbers:\n");
scanf("%d%d%d",&a,&b,&c);
p1=&a;
p2=&b;
p3=&c;
if(*p1<*p2&&*p3<*p2)

{
    printf("biggest number:%d",*p2);
}
else if(*p2<*p3&&*p1<*p3){
    printf("biggest number:%d",*p3);}

else{
    printf("biggest number:%d",*p1);}}
