#include<stdio.h>
int main(){
int a,b,sum=0;
printf("a:\t,b:\n");
scanf("%d%d",&a,&b);
if(a<b){
    while(a<b){
if(a%2==0){
sum=sum+a;}
a++;}}

if(b<a){
    while(b<a){
if(b%2==0){
sum=sum+b;}
b++;}}
    printf("sum=%d",sum);
}
