#include<stdio.h>
int main()
{
	int arr[50],n,i,key,loc;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter element to insert:");
	scanf("%d",&key);
	printf("enter location to insert: ");
	scanf("%d",&loc);
	for(i=n-i;i>=loc;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[loc]=key;
	return 0;
}












