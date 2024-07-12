#include <stdio.h>
void main()
{
    int a=0,b=10,c=5,d;
    d=a++ && ++b && ++c;
    printf("%d %d %d %d",a,b,c,d);
}
