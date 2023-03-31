#include<stdio.h>
main()
{
	int n,i;
	printf("Enter the size : ");
	scanf("%d",&n);
	int a[n];
	int *ptr;
	ptr=&a;
	for(i=0;i<n;i++)
	{
		printf("Enter the elements : ");
		scanf("%d",&a[i]);
	}
	printf("Reverse array is : ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d",*(ptr+i));
	}
	
}
