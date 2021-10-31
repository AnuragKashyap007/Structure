#include<stdio.h>
struct employee
{
    int empno,salary;
    char empname[25];
    char department_name[25];
}emp[100];
 
void main()
{
    int i;
    int n=20;
    printf("Enter employee info as empno, empname , department_name, salary\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %s %d",&emp[i].empno,emp[i].empname,&emp[i].department_name,&emp[i].salary);
    }
    printf("\nEMPNO   \tEMPNAME\t DEPARTMENT_NAME \tSALARY\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%s\t\t%d\n",emp[i].empno,emp[i].empname,emp[i].department_name,emp[i].salary);
    }
}
