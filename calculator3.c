#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char op;
	int number1, number2, result;

    printf("Please enter an operator (+,-,*,/): ");
	scanf("%c", &op);

	printf("Please enter two numbers: ");
	scanf("%d %d", &number1, &number2);

	switch (op)
	{
	case '+':
		result = number1 + number2;
		printf("Result: %d", result);
		break;
	case '-':
		result = number1 - number2;
		printf("Result: %d", result);
		break;
	case '*':
		result = number1 * number2;
		printf("Result: %d", result);
		break;
	case '/':
		result = number1 / number2;
		printf("Result: %d", result);
		break;
	default:
		printf("Invalid input! Please enter a valid operator");

	}

	return 0;
}
