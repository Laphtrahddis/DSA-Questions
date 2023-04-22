/*  Wap to compute area and perimeter of a rectangle using pointer  */
#include<stdio.h>
int main()
{
	int *ptr1,*ptr2,len,brt,area,peremeter;
	ptr1=&len;
	ptr2=&brt;
	printf("enter the length and breadth of th rectangle");
	scanf("%d %d",ptr1,ptr2);
	printf("the area of the recatangle is %d and the peremeter of the rectnge is %d",((*ptr1)*(*ptr2)),((*ptr1+*ptr2)*2));

}
