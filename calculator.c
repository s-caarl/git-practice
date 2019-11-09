//four-function calculator

#include <stdio.h>

double addition(double x, double y);
double subtraction(double x, double y);
double multiplication(double x, double y);
double division(double x, double y);

int main()
{
	double a, b;
	int menu;
	printf("***Integer Calculator***\n");
	do
	{
		printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n0. EXIT\n");
		scanf("%d", &menu);
		
		switch (menu)
		{
			case 1:
				printf("Enter value 1: ");
				scanf("%lf", &a);
				printf("Enter value 2: ");
				scanf("%lf", &b);
				printf("The sum of %g and %g is %g\n", a, b, addition(a, b));
				break;
			case 2:
				printf("Enter value 1: ");
				scanf("%lf", &a);
				printf("Enter value 2: ");
				scanf("%lf", &b);
				printf("The difference of %g and %g is %g\n", a, b, subtraction(a, b));
				break;
			case 3:
				printf("Enter value 1: ");
				scanf("%lf", &a);
				printf("Enter value 2: ");
				scanf("%lf", &b);
				printf("The product of %g and %g is %g\n", a, b, multiplication(a, b));
				break;
			case 4:
				printf("Enter value 1: ");
				scanf("%lf", &a);
				printf("Enter value 2: ");
				scanf("%lf", &b);
				printf("The quotient of %g and %g is %g\n", a, b, division(a, b));
				break;
			case 0:
				menu = 0;
				break;
			default:
				printf("Invalid option. Please try again.\n");
				break;
		}
	}
	while (menu != 0);
	
	return 0;
}

double addition(double x, double y)
{
	return x + y;
}

double subtraction(double x, double y)
{
	return x - y;
}

double multiplication(double x, double y)
{
	return x * y;
}

double division(double x, double y)
{
	return x / y;
}














