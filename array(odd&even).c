#include<stdio.h>
int main()  
{
int i,arr[50],size,n=0,m=0;
printf("enter the size of the element:");
scanf("%d",&size);
for(i=0;i<size;i++)
{
printf("enter numbers:");
scanf("%d",&arr[i]);
}
for(i=0;i<size;i++)
{
if(arr[i]%2==0)
n++;
else
m++;
}
printf("odd=%d\teven=%d",m,n);
return 0;
}
