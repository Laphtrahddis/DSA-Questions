/* Write a Progarm to transpose a Matrix. */
#include<stdio.h>
void transpose(int [][10],int,int);
int main()
{
	int sum=0,A[10][10],i,j,k,r1,r2,c1,c2;
	printf("enter row and columns of A\n");
	scanf("%d %d",&r1,&c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("enter element of A R%d, and C%d :",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	transpose(A,r1,c1);
	
}
void transpose(int A[][10],int r1,int c1)
{
	int i,j,B[20][20];
	for (i=0;i<r1;i++)
	{
		for (j=0;j<c1;j++)
		{
			B[j][i]=A[i][j];
		}
	}
	for(i=0;i<c1;i++)
	{
		for(j=0;j<r1;j++)
		{
			printf("%d\t",B[i][j]);
		}
		printf("\n");
	}
}
