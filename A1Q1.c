/* Write a program to find the location of any element from an array. */

#include<stdio.h>
int main()
{
	int A[100],found=0,num,n,i;
	printf("enter number of elements in the array\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("enter element of index %d: ",i);
		scanf("%d",&A[i]);
	}
	printf("enter the element you want to find:  ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if (A[i]==num)
		{
			printf("element %d is found at index %d\n",num,i);
			found++;
		}
	}
	if (found==0)
	{
		printf("element is not found in the array");
	}
}
