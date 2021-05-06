#include<stdio.h>
int uadd_ok(unsigned x,unsigned y)
{
    if (x+y<x)
    {
        return 0;
    }
    else
        return 1;
}
main()
{
    int c1,c2;
    c1=uadd_ok(15,45);
    c2=uadd_ok(4294967295,1);
    printf("%d%d",c1,c2);
}