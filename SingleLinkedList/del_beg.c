#include<stdio.h>
#include<stdlib.h>
#include"struct.c"
#include"create.c"
#include"createlist.c"
#include"display.c"
void main()
{
nodep start,temp=NULL;
start=createlist();
display(start);
printf("now node is deleted from first position\n");
if(start==NULL)
	{
	printf("underflow:\n");
	}
else
	{
	temp=start;
	start=start->next;
	}
free(temp);
display(start);
}
