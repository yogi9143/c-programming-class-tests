#include<stdio.h>
struct worker
{
     char name[20];
     int wage;
     int wdays;
};
int main()
{
     struct worker a,b;
     printf("Enter Details of First Worker\n");
     printf("-------------------------------\n");
     printf("Enter Worker Name : ");
     scanf("%s",a.name);
     printf("Enter Wage        : ");
     scanf("%d",&a.wage);
     printf("Enter wdays       : ");
     scanf("%d",&a.wdays);
     printf("-------------------------------\n");
     printf("Enter Details of Second Worker\n");
     printf("-------------------------------\n");
     printf("Enter Worker Name : ");
     scanf("%s",b.name);
     printf("Enter Wage        : ");
     scanf("%d",&b.wage);
     printf("Enter wdays       : ");
     scanf("%d",&b.wdays);
     printf("-------------------------------\n");
     int p1=a.wage*a.wdays;
     printf("Name of First Worker : %s\nPayment of First Worker : %d\n",a.name,p1);
     printf("-------------------------------\n");
     int p2=b.wage*b.wdays;
     printf("Name of Second Worker : %s\nPayment of Second Worker : %d\n",b.name,p2);
     return 0;
}

