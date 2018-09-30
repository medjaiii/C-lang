#include<stdio.h>
#include<stdlib.h>
#include"struct.c"
#include"create.c"
#include"createlist.c"
#include"display.c"
void main()
{
nodep start,temp,temp1;
start=createlist();
printf("\n\nnow node is entered at the last\n\n");
printf("\nenter the node information\n");
temp=create();
temp1=start;
while(temp1->next!=NULL)
	{
	temp1=temp1->next;
	}
temp1->next=temp;
display(start);
}

