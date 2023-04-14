#include<stdio.h>
void Bubblesort(int A[],int len);
int main()
{
    int A[100]={6,32,643,43,657,42};
    int len=6,i;
    Bubblesort(A,len);
    printf("The sorted array is\n");
    for (i=0;i<len;i++)
    {
        printf("%d\t",A[i]);
    }
}
void Bubblesort(int A[],int len)
{
    int i,j,temp;
    for (i=0;i<len;i++)
    {
        for(j=0;j<len-1-i;j++)
        {
            if (A[j]>A[j+1])
            {
                temp=A[j+1];
                A[j+1]=A[j];
                A[j]=temp;
            }
        }
    }
}
