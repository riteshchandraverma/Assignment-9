#include<stdio.h>
int main() {
    struct student
    {
        int rollno;
        char name[10];
        char address[20];
        int age;
        float avg;
    };
    
    struct student strec[6];
    for(int i=0;i<6;i++)
    {
        printf("Enter details for student %d\n",i+1);
        printf("Roll number:");
        scanf("%d",&strec[i].rollno);
        getchar();
        printf("Name:");
        gets(strec[i].name);
        printf("Address:");
        gets(strec[i].address);
        printf("Age:");
        scanf("%d",&strec[i].age);
        printf("Average marks:");
        scanf("%f",&strec[i].avg);
    }
    printf("\n\n");

    for(int i=0;i<6;i++)
    {
        printf("Student no. %d\n",i+1);
        printf("Roll number:%d\n",strec[i].rollno);
        printf("Name:%s\n",strec[i].name);
        printf("Address:%s\n",strec[i].address);
        printf("Age:%d\n",strec[i].age);
        printf("Average marks:%.2f\n\n",strec[i].avg);
    }

    return 0;
}