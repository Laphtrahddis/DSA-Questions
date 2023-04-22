/* Write a program to delete an element in a 1-D Array. */
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
	printf("enter the element index which you want to be banshed from this universe of the array you yourself made 10 seconds ago :  ");
	scanf("%d",&index);
	for (i=index;i<n;i++)
	{
		A[i]=A[i+1];
	}
	for (i=0;i<n-1;i++)
	{
		printf("%d\t",A[i]);
	}
	
}
