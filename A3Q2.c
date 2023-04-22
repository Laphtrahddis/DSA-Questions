/*Write a program by using functions to input a triplet matrix and convert that to a sparse matrix and display. Use to following functions to perform the operation.
a.	read_triplet(r, t[][3]) to input a triplet matrix
b.	create_sparse(t[][3], s[][t[0][1]])
c.	display_sparse(r, c, s[r][c]) to display the sparse matrix
*/
#include<stdio.h>
void read_triplet(int t[][3]);
void create_sparse(int t[][3],int s[][t[0][1]]);
void display_sparse(int r,int c,int s[r][c]);
int main()
{
	printf("enter the sparse matrix manually\n");
	int t[100][3];
	read_triplet(t);
	int s[t[0][0]][t[0][1]];
	create_sparse(t,s);
	printf("\n\n the sparse matrix, thus, is: \n");
	int r=t[0][0],c=t[0][1];
	display_sparse(r,c,s);
}
void read_triplet(int t[][3])
{
	int i;
	printf("enter the amount of rows in sparse matrix:  ");
	scanf("%d",&t[0][0]);
	printf("enter the amount of columns in sparse matrix:  ");
	scanf("%d",&t[0][1]);
	printf("enter the amount of non zero elements in sparse matrix:  ");
	scanf("%d",&t[0][2]);
	int r=(t[0][2])+1;
	for(i=1;i<r;i++)
	{
		printf("enter the row number of %d non zero element:  ",i);
		scanf("%d",&t[i][0]);
		printf("enter the col number of %d non zero element:  ",i);
		scanf("%d",&t[i][1]);
		printf("enter the value of %d non zero element:  ",i);
		scanf("%d",&t[i][2]);

	}

}
void create_sparse(int t[][3],int s[][t[0][1]])
{
	int i,j;
	for(i=0;i<(t[0][0]);i++)
	{
		for(j=0;j<(t[0][1]);j++)
		{
			s[i][j]=0;
		}
	}
	for (i=1;i<((t[0][2])+1);i++)
	{
		s[t[i][0]][t[i][1]]=t[i][2];
	}
}
void display_sparse(int r,int c,int s[r][c])
{
	int i,j;
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
}
