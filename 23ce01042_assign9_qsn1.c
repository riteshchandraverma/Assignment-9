#include<stdio.h>
int main() {
    int n;
    printf("Enter number of employees:");
    scanf("%d",&n);

    struct company
    {
        char name[10];
        char address[20];
        int Pno;
        int Eno;
    };
    
    struct company emp[n];
    printf("\nEnter structure element of the form:");
    printf("\n(Name,Address,Phone no,Employee no)\n");
    for(int i=0;i<n;i++)
    {
        scanf("%s %s %d %d",emp[i].name,emp[i].address,&emp[i].Pno,&emp[i].Eno);
    }

    printf("\nStructure elements are:");
    printf("\nName\tAddress\tPhone no\tEmployee no");
    for(int i=0;i<n;i++)
    {
        printf("\n%s\t%s\t%d\t\t%d",emp[i].name,emp[i].address,emp[i].Pno,emp[i].Eno);
    }

    return 0;
}