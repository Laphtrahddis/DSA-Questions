/*Write a program to create the triple form a sparse matrix as per the specification given below: 
(i)	read_sparse(r,c,s[][c],) to input a sparse matrix in general form.
(ii)	create_triplate(r, c, s[][c], t[][3]) to create a sparse matrix in triple form.
(iii)	display_triplet(t[][3]) to display the sparse matrix in triple form
*/
#include<stdio.h>
int k=1;
int m=0;
void read_sparse(int r,int c,int sparse[][c])
{
	int i,j;
	printf("enter the element of the sparse matrix");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",&sparse[i][j]);
		}
	}
	printf("your matrix is\n");
	for (i=0;i<r;i++)
	{
	      for (j=0;j<c;j++)
	     {
		 printf("%d",sparse[i][j]);
 	     }
	     printf("\n");
	}
	

}
void create_triplate(int r,int c,int sparse[][c],int triplet[][3])
{
	int i,j;
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			if (sparse[i][j]!=0)
			{
				triplet[k][0]=i;
				triplet[k][1]=j;
				triplet[k][2]=sparse[i][j];
				k++;
				m++;
			}
		}
	}
	triplet[0][0]=r;
	triplet[0][1]=c;
	triplet[0][2]=m;
}
void display_triplet(int triplet[][3],int l)
{
	int i,j;
	printf("the triplet matrix is\n");
	for (i=0;i<l;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d",triplet[i][j]);
		}
		printf("\n");
	}
}
main()
{
	printf("input the number of rows and columns");
	int r,c;
	scanf("%d %d",&r,&c);
	int sparse[10][10];
	read_sparse(r,c,sparse);
	int triplet[10][3];
	create_triplate(r,c,sparse,triplet);
	printf("\n\n");
	display_triplet(triplet,k);

}
