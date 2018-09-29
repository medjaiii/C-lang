
int mqueen(int q)
{
int i,j,x=0,k,n=q,count=1;
int size=q;
while(q!=0)
	{
	for(k=0;k<n;k++)
		{
		for(i=0;i<n;i++)
			{
			for(j=x;j<n;j++)
				{
				if(ptr[i][j]==0)
				{
				ptr[i][j]=2;
				q--;
				if(q<0)
				{
				printf("error");
				}
				rejection(i,j,size);
				break;
				}
				else
				{
				if(j>n-2&&j<=n-1&&count==1)
				{
				j=0;
				count++;
				}
				continue;
				}
				}
			if(j<(n-1))
			{
			x=j+1;
			count=1;
			}
			else
			x=0;
			}
		if(q!=0)
		{
		x=0;
		x=x+k+1;
		if(k<(n-1)){
		for(i=0;i<n;i++)
		{
                for(j=0;j<n;j++)			//initializing array to zero
                ptr[i][j]=0;
		q=n;
		}
		}
		else
		break;
		}
		else
		break;
		}
	break;
	}
return 0;
}
