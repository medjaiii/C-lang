#include<stdio.h>
#include"stdlib.h"
#include"struct.c"
#include"create.c"
#include"createlist.c"
#include"display.c"
void main()
{
nodep start,temp=NULL,temp1=NULL;
int count=1,pos;
start=createlist();
display(start);
printf("enter the pos you wanted to delete\n");
scanf("%d",&pos);
if(start!=NULL)
{
if(count==pos)
	{
	temp=start;
	start=start->next;
	}
else if(count<pos)
{
temp=start;
temp1->next=start;
while(count<pos&&temp!=NULL)
	{
	temp=temp->next;
	temp1=temp1->next;
	count++;
	}
temp1->next=temp->next;
temp->next=NULL;
}
}
free(temp);

display(start);

}
