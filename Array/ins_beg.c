#include<stdio.h>
#include<stdlib.h>
int ins_beg(int [],int,int);			//RETURNS THE SIZE OF ARRAY
void main()
{
int a[10],n,value,i;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the elements of array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the value to be entered at the first position  ");
scanf("%d",&value);
n=ins_beg(a,n,value);
printf("array is :\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n");
}

int ins_beg(int a[],int b, int elem)
{
int i;
for(i=b-1;i>=0;i--)
a[i+1]=a[i];
a[0]=elem;
return ++b;
}
