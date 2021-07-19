/*Write a program to find the area of the circle. 
  Consider including the following in your program:

  1. Get radius of the circle as user input.
  2. Use appropriate data types as required.
  3. To improve user experience, use user-friendly messages.
  4. You may decorate your program to greet the user with a 
     welcome message and a thank you note.
*/

#include<stdio.h>
#include<unistd.h>
int main()
{

	printf("********************************\n");
	printf("-----------WELCOME-----------\n\n");
	const float PI = 3.14;
    float radius,area;
    
	printf("Enter the radius of the circle in centimetres:\n");
	scanf("%f",&radius);
	
	
	printf("Calculating radius…\n\n");
	usleep(500000);
	
	area= PI * radius * radius;
	printf("The area of the circle is %.1f sq. cm.\n\n",area);
	usleep(500000);
	
	printf("**********************************\n");
	printf("-----------THANK YOU-----------\n");
	printf("**********************************");
	
	return 0;
}
