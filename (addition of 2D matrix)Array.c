#include<stdio.h>
int main()
{
	int r1,c1,r2,c2;
	int harika[100][100],vani[100][100],bindu[100][100];
	int i,j;
	printf("\nenter the value of r1,c1:\n");
	scanf("%d%d",&r1,&c1);
	printf("\nenter the value of r2,c2:\n");
	scanf("%d%d",&r2,&c2);
	if(r1==r2 && c1==c2)
	{
		printf("\nenter the first matrix\n ");
	    for(i=0;i<r1;i++)
	    {
		    for(j=0;j<c1;j++)
		{
			scanf("%d",&harika[i][j]);
		}
	    }
	    printf("\nenter the second matrix\n ");
	    for(i=0;i<r2;i++)
	    {
		    for(j=0;j<c2;j++)
		{
			scanf("%d",&vani[i][j]);
		}
    	}	
    	for(i=0;i<r1;i++)
		{
		for(j=0;j<c1;j++)
			{
				bindu[i][j]=harika[i][j]+vani[i][j];
			}
		}
		printf("\naddition of matrix\n");
	    for(i=0;i<r1;i++)
    	{
		for(j=0;j<c1;j++)
		{
			printf("\t%d ",bindu[i][j]);
		}
		printf("\n");
	    }
	}
		else
	{
		printf("\naddition not possible...!");
	}

	return 0;
}
