#include<stdio.h>
#include<stdlib.h>
void input(int [],int);
int bin_sear(int [],int,int);

void main()
{
int a[10],n,value,pos=-1;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the elements of array:\n");
input(a,n);
printf("enter the value to be searched\n");
scanf("%d",&value);
pos=bin_sear(a,n,value);
if(pos!=-1)
	{
	printf("%d is found at %d\n",value,pos);
	}
else
	printf("NOT FOUND!!!\n");
}
void input(int a[10],int b)
{
int i;
for(i=0;i<b;i++)
scanf("%d",&a[i]);
}

int bin_sear(int a[10],int b, int value)
{
int loc=-1,low=0,high=b-1,mid=0;
while(low<=high)
	{
	mid=(high+low)/2;
	if(value==a[mid])
	return (mid+1);
	else if(value>a[mid])
	low=mid+1;
	else
	high=mid-1;
	}
return -1;
}
