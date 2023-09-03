#include <stdio.h>
/**
 * main - Set decimal prcision
 *
 * Return: 0 (success)
 */
int main(void)
{
	/**
	 * You will notice that that if
	 *	you print a floating point number,
	 *	the output will show so many digits after the decimal point.
	 */
	float myFloatNum = 3.5;
	double myDoubleNum = 19.99;

	printf("%f\n", myFloatNum);
	printf("%f\n", myDoubleNum);

	/**
	 * If you want to remove the extra zeros (set decimal),
	 *	you can use a dot(.) followed by a number
	 *		that specifies how many digits that should be
	 *			shown after the decimal point.
	 */
	printf("Output with one decimal point, %.1f\n", myFloatNum);
	printf("Output with two decimal points, %.2f\n", myFloatNum);
	printf("Output with three decimal points, %.3f\n", myFloatNum);
	printf("Output with one decimal point, %.1f\n", myDoubleNum);
	printf("Output with two decimal points, %.2f\n", myDoubleNum);
	printf("Output with three decimal points, %.3f\n", myDoubleNum);
	return (0);

}
