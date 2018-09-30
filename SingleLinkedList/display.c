#include<stdio.h>
void display(nodep start)
{
nodep temp;
temp=start;
while(temp!=NULL)
	{
	printf("%d\t",temp->info);
	temp=temp->next;
	}
printf("\n");

}
