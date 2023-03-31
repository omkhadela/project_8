#include <stdio.h>

fns(int *a, int *b,int *c)
{
    *a=1;
    *b=2;
    *c=3;
}
 main()
{
    int a,b,c;
    fns(&a, &b, &c);
    printf("a=%d,b=%d,c=%d",a,b,c);
}

