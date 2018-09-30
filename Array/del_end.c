#include<stdio.h>
#include<stdlib.h>
int del_end(int [],int);			//returns the value gets deleted
void main()
{
int a[10],n,i,value;
printf("enter the size of array:\n");
scanf("%d",&n);
printf("enter the elements of array:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("value is deleted\n");
value=del_end(a,n);
printf("value is %d\n",value);
printf("now array is :\n");
for(i=0;i<n-1;i++)
printf("%d\t",a[i]);
}
int del_end(int a[10],int b)
{int elem;
elem=a[b-1];
return elem;
}
