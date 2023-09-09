#include <stdio.h>
/**
* main - Explicit conversion
*
* Explicit conversion is done manually by placing the type parentheses ()
*	 in front of the value.
*
* Return: success (0)
*/
/*Manual conversion: int to float*/
int main(void)
{
int num1 = 5, num2 = 2;
float div = (float) num1 / num2;

printf("%f\n", div); /* 2.500000*/

/* Decimal precision */

printf("%.1f", div); /* 2.5 */
return (0);
}
