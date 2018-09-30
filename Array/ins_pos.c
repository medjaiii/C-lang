#include<stdio.h>
#include<stdlib.h>

int ins_pos(int [],int,int,int);
void main()
{
int a[10],n,i,value,pos;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the elements of array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the value wanted to enter\n");
scanf("%d",&value);
printf("at position \n");
scanf("%d",&pos);
n=ins_pos(a,n,value,pos);
printf("array is :\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}

int ins_pos(int a[10],int b,int elem ,int pos)
{int i;
for(i=b-1;i>=pos-1;i--)
a[i+1]=a[i];
a[pos-1]=elem;
return ++b;
}
