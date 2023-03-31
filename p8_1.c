#include<stdio.h>

main()
{
	int *a,*b,*c,swap,x,y;
	printf("Enter the value of x : ");
	scanf("%d",&x);
	printf("Enter the value of y : ");
	scanf("%d",&y);
	
	a=&x;
	b=&y;
	
	swap=*b;
	*b=*a;
	*a=swap;
	
	printf("After swapping x is : %d\n",x);
	printf("After swapping y is : %d",y);
}
