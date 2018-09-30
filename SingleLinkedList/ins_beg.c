#include<stdio.h>
#include<stdlib.h>
#include"struct.c"
#include"create.c"
#include"createlist.c"
#include"display.c"
nodep ins_beg()
{
nodep start,temp;
printf("now you are going to insert value at the beggining\n");
start=createlist();
	{
	temp=create();
	if(start==NULL)
		{
		start=temp;
		start->next=NULL;
		}
	else
		{
		temp->next=start;
		start=temp;
		}
	}
display(start);
}

void main()
{
ins_beg();
}
