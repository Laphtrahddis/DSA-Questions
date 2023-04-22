/*Write a program to insert an element to a 1-D Array.*/
#include<stdio.h>
int main()
{
	int A[100],index,temp,num,n,i;
	printf("enter number of elements in the array\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("enter element of index %d: ",i);
		scanf("%d",&A[i]);
	}
	printf("enter the element you want to add amd also its index:  ");
	scanf("%d %d",&num,&index);
	for (i=n;i>=index;i--)
	{
		A[i+1]=A[i];
	}
	A[index]=num;
	for (i=0;i<=n;i++)
	{
		printf("%d\t",A[i]);
	}
	
}
