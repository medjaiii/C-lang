#include<stdio.h>
#include<stdlib.h>
static int ptr[100][100];
#include"rejection.c"
#include"mqueen.c"

void main()
{
int q,i,j;
printf("enter the size of chess board bw(4-10) except 8 \n");
printf("2 : Queen & 1 : empty\n");
scanf("%d",&q);
mqueen(q);
printf("\n");
for(i=0;i<q;i++)
	{
	for(j=0;j<q;j++)
	printf("%d",ptr[i][j]);
	printf("\n");
	}
printf("\n\n");
}
