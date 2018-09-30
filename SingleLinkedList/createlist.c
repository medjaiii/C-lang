#include<stdio.h>
nodep createlist()
{
nodep start=NULL,temp,t;
int c;
do{
temp=create();
if(start==NULL)
	{
	start=temp;
	}
else
	{
	t->next=temp;
	temp->next=NULL;
	}
t=temp;
printf("enter 1 to continue or any to exit\n");
scanf("%d",&c);
}while(c==1);
return start;
}
