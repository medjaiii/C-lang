#include<stdio.h>
#include<stdlib.h>
#include"struct.c"
#include"createlist.c"
#include"display.c"
void main()
{
nodep start=NULL;
start=createlist();
display(start);
}
