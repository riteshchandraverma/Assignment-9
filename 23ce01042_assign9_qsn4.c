#include<stdio.h>
typedef struct address
{
    char city[15];
    char street[15];
    int zipcode;
}ad;

typedef struct Person
{
    char name[10];
    ad address;                             //address can be named anything but ad should be same as above
}prs;

int main() {
    prs p1;
    printf("Enter name:");
    gets(p1.name);
    printf("Enter street:");
    gets(p1.address.street);
    printf("Enter city:");
    gets(p1.address.city);
    printf("Enter zipcode:");
    scanf("%d",&p1.address.zipcode);

    printf("Name:%s\n",p1.name);
    printf("Street:%s\n",p1.address.street);
    printf("City:%s\n",p1.address.city);
    printf("Zipcode:%d",p1.address.zipcode);

    return 0;
}

