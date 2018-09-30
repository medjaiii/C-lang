#include<stdio.h>
#include<stdlib.h>
#include"struct.c"
#include"create.c"
#include"createlist.c"
#include"display.c"
void main()
{
nodep start,temp,temp1;
int pos,count=2;
start=createlist();
display(start);
printf("enter the pos where you want to add the node\n");
scanf("%d",&pos);
printf("enter the node information\n");
temp=create();
temp1=start;
if(pos==1)
	{
	temp->next=start;
	start=temp;
	}
else if(pos>count)
{
while(count<pos&&temp1!=NULL)
	{
	temp1=temp1->next;
	count++;
	printf("%d\n",count);
	}
temp->next=temp1->next;
temp1->next=temp;
}
else if(count==pos)
	{
	temp->next=temp1->next;
	temp1->next=temp;
	}
display(start);
}
