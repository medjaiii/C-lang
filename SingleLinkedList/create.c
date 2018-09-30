#include<stdio.h>
nodep create()
{
nodep temp;
temp=(nodep)malloc(sizeof(struct node));
printf("enter the value in node\n");
scanf("%d",&temp->info);
temp->next=NULL;
return temp;
}

