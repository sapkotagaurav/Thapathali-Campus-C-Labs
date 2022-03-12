//structure
# include<stdio.h>
struct student {
    char name[30],remarks[30];
    int roll;
    float marks;
    };
int main(){
struct student s[5];
for(int i=0;i<5;i++){
    printf("For student %d\nEnter name: ",i+1);
    scanf("%s",s[i].name);
    printf("Roll Number: ");
    scanf("%d",&s[i].roll);
    printf("Marks: ");
    scanf("%f",&s[i].marks);
    printf("Remarks: ");
    scanf("%s",s[i].remarks);
}
for(int a=0;a<5;a++){
    printf("\nName: %s \nRoll No.=%d \nMarks= %f\nRemarks=%s",s[a].name,s[a].roll,s[a].marks,s[a].remarks);
}
}
