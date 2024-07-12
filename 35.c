#include<stdio.h>
int main()
{
	int i = 0;
	char c;
	char str[ ] = "Deltax";
	while(str[i])
	{
		putchar (toupper(str[i]));
		i++;
	}
}
