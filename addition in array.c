#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50},i,sum=0;
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
		sum=sum+arr[i];
	}
	printf("sum:%d",sum);
	return 0;
}










