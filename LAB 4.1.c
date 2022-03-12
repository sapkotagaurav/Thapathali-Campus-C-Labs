#include <stdio.h>
int main(){
int phy,chem,msth,eng,bio,total;
float percentage;
char division;
printf("phy:\n,chem:\n,mmath:\n,eng:\n,bio:\n");
scanf("%d %d %d %d %d",&phy,&chem,&msth,&eng,&bio);
total=phy+chem+msth+eng+bio;

printf("phy=%d,chem=%d,msth=%d,eng=%d,bio=%d",phy,chem,msth,eng,bio);
printf("total marks=%d",total);
percentage=(total)/5;

printf("percentage=%f",percentage);
if(percentage>=95){
   printf("extraordinary");

}
else if(percentage>=80&&percentage<95){
    printf("distinction");

}
else if(percentage>=65&&percentage<80){
    printf("first division");}
    else if(percentage>=55&&percentage<65){
    printf("second division");}
    else if(percentage>=40&&percentage<55){
    printf("third division");}
    else if(percentage<40){
    printf("faill");}



}


