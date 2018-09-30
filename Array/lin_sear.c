#include<stdio.h>
#include<stdlib.h>
int lin_sear(int [],int,int);
void main()
{
int a[10],n,i,value=0,pos=0;
printf("enter the size of array:\n");
scanf("%d",&n);
printf("enter the elements of array:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter  the element to be searched\n");
scanf("%d",&value);
pos=lin_sear(a,n,value);
if(pos!=0)
printf("%d is found at %d",a[pos-1],pos);
else
printf("element is not found");
printf("\n");
}
int lin_sear(int a[10],int b,int value)
{int i;
for(i=0;i<b;i++)
{	if(a[i]==value)
	{
	return ++i;
	}
}
return 0;
}
