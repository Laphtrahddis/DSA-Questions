/*Wap to dynamically allocate an array of n integers and display its elements and its sum. */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,n,sum=0;
	printf("input number of elements");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	for (i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
		sum=sum+*(ptr+i);
	}
	printf("the elements are:  ");
	for (i=0;i<n;i++)
	{
		printf("%d\t",*(ptr+i));
	}
	printf("sum is %d",sum);

}
