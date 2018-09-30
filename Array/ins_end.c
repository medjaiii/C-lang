#include<stdio.h>
#include<stdlib.h>
int ins_end(int [],int,int);
void main()
{
int a[10],n=5,value,i;
printf("enter the elem\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the elem\n");
scanf("%d",&value);
n=ins_end(a,n,value);
printf("array is :\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
int ins_end(int a[10],int b,int elem)
{
printf("bis %d\n",b);
a[b]=elem;
b=++b;
printf("b is %d",b);
return b;
}
