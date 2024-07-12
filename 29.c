#include<stdio.h>
struct myStruct 
{ 
	int a; 
	float b; 
};
int main()
{
	struct myStruct s = {1, 2.5};
	struct myStruct *ptr = &s;
	printf("%d %.1f", ptr->a, ptr->b);	
}

