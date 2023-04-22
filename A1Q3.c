/*  Write a program for matrix multiplication.  */
#include<stdio.h>
int main()
{
	int C[10][10],sum=0,A[10][10],B[10][10],i,j,k,r1,r2,c1,c2;
	printf("enter row and columns of A, then r c of B\n");
	scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("enter element of A R%d, and C%d :",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("enter elemnt of B R%d, and C%d : ",i+1,j+1);
			scanf("%d",&B[i][j]);
		}
	}
	if (c1==r2)
	{
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c2;j++)
			{
				C[i][j]=0;
				for (k=0;k<r2;k++)
				{
					C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
				}
			}

		}
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c2;j++)
			{
				printf("%d\t",C[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("mult isnt possible");
	}
}
