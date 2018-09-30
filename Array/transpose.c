#include<stdio.h>
#include<stdlib.h>
void display(int [][5],int);
void input(int [][5],int);
void transpose(int [][5],int);
void main()
{
int a[5][5],n;
printf("enter the order of the matrix:\n");
scanf("%d",&n);
input(a,n);
display(a,n);
printf("now transpose is :\n");
transpose(a,n);
display(a,n);
}
void input(int a[5][5],int b)
{
int i,j;
printf("enter the elements of matrix");
for(i=0;i<b;i++)
for(j=0;j<b;j++)
scanf("%d",&a[i][j]);
}
void display(int a[][5],int b)
{
int i,j;
for(i=0;i<b;i++)
	{
	for(j=0;j<b;j++)
	printf("%d\t",a[i][j]);
	printf("\n");
	}
}

void transpose(int a[][5],int b)
{
int i,j,temp;
for(i=0;i<b;i++)
	{
	for(j=0;j<i;j++)
		{
		temp=a[i][j];
		a[i][j]=a[j][i];
		a[j][i]=temp;
		}
	}

}
