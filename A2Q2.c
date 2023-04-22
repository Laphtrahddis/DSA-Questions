/* 2.	Wap to compute factorial of a number using pointer. */

#include<stdio.h>
int main()
{
	printf("enter the number whose factorial you want to find");
	int *ptr,i,fact=1;
	scanf("%d",ptr);
	for (i=1;i<=(*ptr);i++)
	{
		fact=fact*i;
	}
	printf("the factorial of this number is %d",fact);
}
