/*WAP to take input of an array and display the elements and address of the element(using pointer)*/
#include<stdio.h>
int main()
{
	printf("enter the number of elements");
	int n,A[10],i;
	scanf("%d",&n);
	printf("enter the elements of the array");
	for (i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	int *ptr;
	ptr=&A[0];
	for (i=0;i<n;i++)
	{
		printf("element %d is %d location is %p\n",i+1,*(ptr+i),(ptr+i));
	}

}
