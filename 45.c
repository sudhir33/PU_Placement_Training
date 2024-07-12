#include <stdio.h>
void fun(int *arr,int n)
{
	int temp,i;
	for(i=0;i<n-1;i++)
	{
		temp=arr[i];
		arr[i]=temp;
		arr[i+1]=arr[i];
	}
}
void main()
{
    int arr[]={1,2,3,4,5},i;
    fun(arr,5);
    for(i=0;i<5;i++)
    {
    	printf("%d ",arr[i]);
	}
}
