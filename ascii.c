#include<stdio.h>
void main()
{
int i;
char c='a';
for(i=97;i>0;i--)			//this loop is to reach the first ascii value
c--;
for(i=0;i<128;i++)			//this loop is to display all ascii value's upto 128
{
printf("%d\t:\t%c\n",i,c);
c++;
}
}
