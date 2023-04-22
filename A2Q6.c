/*Wap to dynamically allocate an array of integers and search an element using linear search.*/
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
	printf("enter the element you wanna search:  ");
	scanf("%d",&temp);
	for (i=0;i<n;i++)
	{ 
		if(*(ptr+i)==temp)
			printf("element found at adress %p\n",(ptr+i));
	}
		
}
