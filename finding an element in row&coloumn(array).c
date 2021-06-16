#include<stdio.h>
int main()
{
	int arr[5][5]={
	{7,5,6,8,4},
	{4,4,5,6,7},
	{1,2,3,4,5},
	{6,7,8,9,10},
	{7,17,7,17,7},
	};
	int i,j,find,find2,s=0,se=0;
	printf("enter the element you want to search in row:\n");
	scanf("%d",&find);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(find==arr[i][j])
			{
				s=1;
				printf("element found\n");
				break;
			}
		}
	}
	if(s==0)
	{
		printf("element not found\n");
	}
		printf("enter the element you want to search in coloumn:\n");
		scanf("%d",&find2);
	for(j=0;j<5;j++)
	{
		for(i=0;i<5;i++)
		{
			if(find2==arr[i][j])
			{
				se=1;
				printf("element found\n");
				break;
			}
		}
	}
	if(se==0)
	{
		printf("element not found");
	}
	return 0;
}
