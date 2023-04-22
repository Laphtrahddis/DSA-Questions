/*Write a program to find the transpose of a sparse matrix as  per the specification given below: 
(i)	read_sparse (r, c, s[][c]) to input a matrix in general form.
(ii)	create_triplet(r, c, s[][c], t[][3]) to create a sparse matrix in triple form.
(iii)	transpose (t[][3], res[][3]) to transpose the sparse matrix
(iv)	display_triplet(b[][3]) to display the transpose sparse matrix in triple form
*/
#include<stdio.h>
void input (int [][3]);
void display (int [][3]);
void find_transpose(int[][3],int[][3]);
main()
{
	int triplet[10][3],transpose[10][3];
	input (triplet);
	printf("\n the triplet matrix is\n");
	display(triplet);
	find_transpose(triplet,transpose);
	printf("\n the transpose matrix is\n");
	display(transpose);
}
void input (int mat[][3])
{
	int i;
	printf("\n enter no of rows and columns and no. of non zero elemnts\n");
	scanf("%d %d %d",&mat[0][0],&mat[0][1],&mat[0][2]);
	for (i=1;i<=mat[0][2];i++)
	{
		printf("\nenter the row, col, and non zero elemnt");
		scanf("%d %d %d",&mat[i][0],&mat[i][1],&mat[i][2]);
	}
}
void find_transpose(int triplet[][3], int transpose [][3])
{
	int i,j,k;
	transpose[0][0]=triplet[0][1];
	transpose[0][1]=triplet[0][0];
	transpose[0][2]=triplet[0][2];
	k=1;
	for (j=0;j<triplet[0][1];j++)
	{
		for (i=1;i<=triplet[0][2];i++)
		{
			if (triplet[i][1]==j)
			{
				transpose[k][0]=triplet[i][1];
				transpose[k][1]=triplet[i][0];
				transpose[k][2]=triplet[i][2];
				k++;
			}
		}
	}
}
void display(int mat[][3])
{
	int i;
	for (i=0;i<=mat[0][2];i++){
		printf("%d \t %d \t %d",mat[i][0],mat[i][1],mat[i][2]);
	printf("\n");}
}

