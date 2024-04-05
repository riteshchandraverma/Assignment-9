#include<stdio.h>
typedef struct date
{
    int day,month,year;
}date;

int main() {
    date d1,d2;
    
    printf("Enter first date(dd mm yyyy):");
    scanf("%d %d %d",&d1.day,&d1.month,&d1.year);

    printf("Enter the second date(dd mm yyyy):");
    scanf("%d %d %d",&d2.day,&d2.month,&d2.year);

    int check=d2.year-d1.year;
    int check2=d2.month-d1.month;
    int check3=d2.day-d1.day;

    if(check>0)
        printf("-1\n");
    else if(check<0)
        printf("1\n");
    else if(check==0)
    {
        if (check2 > 0)
        {
            printf("-1\n");
        }
        else if (check2 < 0)
        {
            printf("1");
        }
        else if (check2==0)
        {
            if (check3 > 0)
            {
                printf("-1\n");
            }
            else if (check3 < 0)
            {
                printf("1\n");
            }
            else if(check3==0)
            {
                printf("0\n");
            }
        }
    }
    return 0;
}