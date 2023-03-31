#include<stdio.h>
main()
{
    int a[5]= {1,2,3,4,5};
    
    int *p=&a[0];
    int i;
                                                  
    for(i=0; i<5; i++)				
        printf("\nArray[%d] is %d ",i,*(p+i)); 
    for(i=0; i<5; i++)                                  								
        printf("\n %d ",*(p+i),(p+i)); 		   			
											
}

