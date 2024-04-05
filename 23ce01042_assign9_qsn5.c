#include<stdio.h>
typedef struct CourseRecord
{
    char fname[10];
    char lname[10];
    char dept[10];
    char cc[10];
    int marks[3];
}cr;

float avg(cr student) {
    float marks=0;
    
    for(int i=0;i<3;i++)
        marks+=student.marks[i];
    
    return (marks/3);
}

int result(cr student) {
    float num=avg(student);

    if(num>=35)
        return 1;
    else
        return 0;
}

int main() {
    cr student;
    printf("Enter the first name : ");
    gets(student.fname);
    printf("Enter the last name : ");
    gets(student.lname);
    printf("Enter the Department : ");
    gets(student.dept);
    printf("Enter the courcecode : ");
    gets(student.cc);

    printf("Enter the marks of 3 subjects : ");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&student.marks[i]);
    }

    float marks=avg(student);
    printf("Average marks:%.2f\n",marks);
    
    if(result(student))
        printf("Pass");
    else
        printf("Fail");

    return 0;
}
