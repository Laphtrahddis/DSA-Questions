/* Write a program to find out the largest and smallest element of a 1-D array. */
#include<stdio.h>
int main()
{
	int A[100],found=0,max,min,n,i;
	printf("enter number of elements in the array\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("enter element of index %d: ",i);
		scanf("%d",&A[i]);
	}
	max=A[0];
	min=A[0];
	for(i=0;i<n;i++)
	{
		if (A[i]>max)
		{
			max=A[i];
		}
		if (A[i]<min)
		{
			min=A[i];
		}
	}
	printf("max element is %d \n min elemnt is %d\n",max,min);
}
