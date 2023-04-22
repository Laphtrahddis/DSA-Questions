/*Wap to stores the following information of employees of an organization name,empno, salary and perform the following operations
a.	Display information of the employees whose salary>25000
b.	Display information of the students in ascending order of their salary
*/
#include<stdio.h>
struct employee{
	char name[100];
	int empno;
	int salary;};
int main()
{
	int n,i,j,tempsalary,tempid;
	struct employee emp[10],temp;
	printf("enter the number of employees");
	scanf("%d",&n);
	printf("enter name of the employee, empno,salary \n");
	for (i=0;i<n;i++)
	{
		printf("input name:  ");
		scanf("%s",emp[i].name);
		printf("emp no and salary:  ");
		scanf("%d %d",&emp[i].empno,&emp[i].salary);
	}
	for (i=0;i<n;i++)
	{
		if ((emp[i].salary)>25000)
			printf("%s has a salary more than 25k\n",emp[i].name);
	}
	for (i=0;i<n;i++)
	{
		for (j=1;j<n-i-1;j++)
		{
			if ((emp[j].salary)<(emp[i].salary))
			{
				temp=emp[i];
				emp[i]=emp[j];
				emp[j]=temp;

			}
		}
	}
	for (i=0;i<n;i++)
	{
		printf("\n%s is name\n emp no: %d \n salary: %d\n\n",emp[i].name,emp[i].empno,emp[i].salary);
	}
}
