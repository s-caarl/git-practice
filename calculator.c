//integer calculator

#include <stdio.h>

int addition(int x, int y);
int subtraction(int x, int y);
int multiplication(int x, int y);
int division(int x, int y);

int main()
{
	int a, b, menu;
	printf("***Integer Calculator***\n");
	do
	{
		printf("1. Addition\n2. Subtraction\n0. EXIT\n");
		scanf("%d", &menu);
		
		switch (menu)
		{
			case 1:
				printf("Enter value 1: ");
				scanf("%d", &a);
				printf("Enter value 2: ");
				scanf("%d", &b);
				printf("The sum of %d and %d is %d\n", a, b, addition(a, b));
				break;
			case 2:
				printf("Enter value 1: ");
				scanf("%d", &a);
				printf("Enter value 2: ");
				scanf("%d", &b);
				printf("The difference of %d and %d is %d\n", a, b, subtraction(a, b));
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

int addition(int x, int y)
{
	return x + y;
}

int subtraction(int x, int y)
{
	return x - y;
}

int multiplication(int x, int y)
{
	return x * y;
}

int division(int x, int y)
{
	return x / y;
}














