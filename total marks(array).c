#include<stdio.h>
int main()
{
	int i,marks[50],total=0,size;
	printf("enter the size of marks:");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<size;i++)
	{
		total=total+marks[i];
	}
	printf("%d",total);
	return 0;
}












