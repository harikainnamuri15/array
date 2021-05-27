#include<stdio.h>
int main()
{
	int i,arr[50],size,find,s=0;
	printf("enter the size of array:");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element you want to find:");
	scanf("%d",&find);
	for(i=0;i<size;i++)
	{
		if(find==arr[i])
		{
			s=1;
			printf("element found");
			break;
		}
	}
	if(s==0)
	{
		printf("element not found");
	}
	return 0;
}
