/*A restaurant gives a discount of 10% if the total customer bill including 
  5% tax is greater than or equal to Rs. 1000. Write a program for 
  the problem statement mentioned above and print the next 
  payable amount as applicable.
*/

#include<stdio.h>
int main()
{
	float bill , payableAmt , totalBill;
	puts("Enter bill: ");
	scanf("%f", &bill);
	totalBill= bill* 5/100;
	if(totalBill>=1000)
	{
		payableAmt=totalBill*0.9;
		printf("Net payable amount after discount: %.2f", payableAmt);
	}
	else
	{
		payableAmt=totalBill;
		printf("Net payable amount: %.2f", payableAmt);
	}
}
