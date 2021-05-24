#include<stdio.h>
int main()
{
	int arr[5]={22,3,44,5,43};
	int large,i;
	large=arr[0];
	for(i=1;i<6;i++)
	{
		if(arr[i]>large)
		{
			large=arr[i];
		}
	}
	printf("largest element:%d",large);
	return 0;
}












