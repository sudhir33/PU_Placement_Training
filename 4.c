#include<stdio.h>
int main()
{
	int var1=10;
	{
		int var2 =20;
		printf("%d %d\n",var1,var2);
	}
	printf("%d %d\n",var1,var2);
	return 0;
}
