/*
Write a menu-driven program to implement a stack by using array. It should have the following operations(functions):
(i)	void push(int) to insert an element into the stack
(ii)	int pop() to remove an element from the top of the stack
(iii)	intisFull() to check the stack is full or not 
(iv)	intisEmpty() to check the stack is empty or not.
(v)	void display() to display the elements of the stack

*/
#include<stdio.h>
#include<stdlib.h>
int TOP=-1;
void PUSH(int STACK[], int MAXSTK, int item)
{
	int status;
	status=isFull(STACK,MAXSTK);
        if (status==1)
        {
                printf("Stack Overflow\n");
        }
        else
        {
                TOP=TOP+1;
		STACK[TOP]=item;

        }
	DISPLAY(STACK,MAXSTK);

}
int POP(int STACK[])
{
	int item;
	item=STACK[TOP];
	STACK[TOP]=0;
	TOP=TOP-1;
	return item;
}
int isFull(int STACK[],int MAXSTK)
{
	if (TOP==MAXSTK-1)
		return 1;
	else
		return 0;
}
int isEmpty()
{
	if (TOP==-1)
		return 1;
	else
		return 0;
}
void DISPLAY(int STACK[],int MAXSTK)
{
	int i;
	printf("\nSTACK IS: \n");
	for (i=0;i<=TOP;i++)
	{
		printf("%d\t",STACK[i]);
	}
}
int main()
{
	int option,i,temp,MAXSTK=5,item,STACK[5]={0,0,0,0,0},status;
	for (i=0;i<50;i=i+0){
		printf("\n=======================================================================================================================================================================================\n");
		printf("\nenter the option number of what you want to do\n");
		printf("1. PUSH\n2. POP\n3. EXIT\n");
		printf("\nenter here :   ");
		scanf("%d",&option);
		if (option==1)
		{
			 printf("enter the number you want to insert\n");
			 scanf("%d",&item);
			PUSH(STACK,MAXSTK,item);	
		}
		else if(option==2)
		{
			status=isEmpty();
			if (status==1)
			{
				printf("stack underflow\n");
			}
			else
			{
				temp=POP(STACK);
				printf("deleted element is %d \n",temp);
			}
			DISPLAY(STACK,MAXSTK);
		}
		else
		{
			printf("Thank you for using the program\n");
			exit(0);
		}
	}
}
