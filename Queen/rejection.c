void rejection(int pox,int poy,int size)
{
int i=pox,j=poy,k=0,n=size;
while(k<n)
	{
	ptr[i][k++]=1;		//row rejection
	}
k=0;
while(k<n)
	{
	ptr[k++][j]=1;			//column rejection
	}
i=pox;
j=poy;
while((i<=(n-1)) &&(i>=0)&& (j<=(n-1)) &&(i>=0))
	{
	if((i>(n-1)) ||(i<0)|| (j>(n-1)) ||(j<0))
	break;
	ptr[i++][j--]=1; 				//DL
	}
i=pox;
j=poy;
while(i>=0&&i<=(n-1) &&j<=(n-1) && j>=0)
	{
	    if((i>(n-1)) ||(i<0)|| (j>(n-1)) ||(j<0))
        break;

	ptr[i--][j++]=1;		//UR
	}
i=pox;
j=poy;
while((i<=(n-1)) && (i>=0) && (j<=(n-1)) && (j>=0))
	{
	    if((i>(n-1)) ||(i<0)|| (j>(n-1)) ||(j<0))
        break;

	ptr[i++][j++]=1;			//DR
	}
i=pox;
j=poy;
while(i>=0&&i<=(n-1) &&j>=0&&j<=(n-1))
	{
	   if((i>(n-1)) ||(i<0)|| (j>(n-1)) ||(j<0))
        break;

	ptr[i--][j--]=1;			//UL
	}
ptr[pox][poy]=2;
}
