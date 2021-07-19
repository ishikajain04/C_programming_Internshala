/*The following code is executable but poorly formatted. 
  Try to properly indent the code and make it look clean and readable.
*/

#include<stdio.h>
int main()
{
    int x; 
    int y,t;
    puts("Enter first number: ");
    scanf("%d",&x); 
	puts("Enter second number: ");
    scanf("%d", &y);
    printf("\nBefore Swapping\nFirst number = %d\nSecond number = %d\n\n", x, y);
    t=x;
    x=y;
    y = t ;
    printf("After Swapping\nFirst number = %d\nSecond number = %d\n", x, y);
    return 0;
}
