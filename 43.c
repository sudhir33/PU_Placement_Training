#include <stdio.h>
void fun(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		arr[i]=arr[i]+1;
	}
}
void main()
{
    int arr[]={1,2,3},i;
    fun(arr,3);
    for(i=0;i<3;i++)
    {
    	printf("%d ",arr[i]);
	}
}
