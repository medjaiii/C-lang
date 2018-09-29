#include<stdio.h>
#include<stdlib.h>		//this program is to create a pattern.

void main()
{
int i,j,n=8,count=5;
for(i=0;i<3;i++)
	{
	if(i<3)				//upper segment
	for(j=0;j<n;j++)
	{
	{
	if(j<(n-1))
		{
		printf(" ");
		}
	else
		{
		printf("*");
		}
	}
	}
	printf("\n");
	--n;}
		if(1)			//lower segment
		{
		for(i=0;i<3;i++)
			{
			for(j=0;j<count;j++)
			{
			if(j==(count-i-1))
			{
			printf("*");continue;
			}
			else if(j==i)
			{
			printf("*");continue;
			}
			printf(" ");
			}
		printf("\n");
		}
		}
	}
				//created by MEDJAII

