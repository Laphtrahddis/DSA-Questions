/* Write a program to merge two 1-D Arrays and print the resultant array.*/
#include<stdio.h>
int C[10];
void merger(int A[], int B[],int n1,int n2)
{
	int i;
	for (i=0;i<(n1+n2);i++)
	{
		if (i<n1)
		         C[i]=A[i];
		else
		         C[i]=B[i-n1];
	}

}
int main()
{
	int n1,n2,i,j,A[10],B[10];
	printf("enter the number of elements in array 1 and array 2\n");
	scanf("%d %d",&n1,&n2);
	for (i=0;i<n1;i++)
	{
		printf("enter element of array A element number %d:  ",i+1);
		scanf("%d",&A[i]);
	}
	for (i=0;i<n2;i++)
	{
		printf("enter element of array B element number %d:  ",i+1);
		scanf("%d",&B[i]);
	}
	printf("array C, the resultant array is\n");
	merger(A,B,n1,n2);

	for (i=0;i<(n1+n2);i++)
	{
		printf("%d\t",C[i]);
	}		
}
