#include <stdio.h>
main() 
{
    char str[100], *ptr;
    int count;
    printf("Enter any string: ");
    gets(str);
    
    ptr = str;
    
    count = 0;
    
    while ( *ptr != '\0') 
	{
        count++;
        ptr++;
    }
    printf("The length of the string is: %d", count);
}

