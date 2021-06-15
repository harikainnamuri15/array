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
	int i,j;
	int sum=0;
	//row sum
	printf("row sum:");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			sum=sum+arr[i][j];
		}
		printf(" %d",sum);
	}
	printf("\n");
	printf("coloumn sum:");
	//coloumn sum
	for(j=0;j<5;j++)
	{
		for(i=0;i<5;i++)
		{
			sum=sum+arr[i][j];
		}
		printf(" %d",sum);
	 } 
	 return 0;
}
