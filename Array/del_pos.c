#include<stdio.h>
#include<stdlib.h>
int del_pos(int [],int, int);				//returns the value gets deleted
void main()
{int a[10],n,value,pos,i;
printf("enter the ssize of array:\n");
scanf("%d",&n);
printf("enter the elements of array:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the position for deletion:\n");
scanf("%d",&pos);
value=del_pos(a,n,pos);
printf("value is deleted:\t%d\n",value);
printf("now array is;\n");
for(i=0;i<n-1;i++)
printf("%d\t",a[i]);
printf("\n");
}

int del_pos(int a[10],int b,int pos)
{
int i,elem;
elem=a[pos-1];
for(i=pos-1;i<b;i++)
a[i]=a[i+1];				//left shift
return elem;
}
