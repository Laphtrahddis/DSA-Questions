/*Wap to dynamically allocate an array of n integers sort it in ascending order*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,temp,j,i,n,sum=0;
	printf("input number of elements");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	for (i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("the elements are:  ");
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (*(ptr+i)>*(ptr+j))
			{
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}
	for (i=0;i<n;i++)
	{
		printf("%d \t",*(ptr+i));
	}
}
