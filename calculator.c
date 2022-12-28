#include<stdio.h>
#include<stdlib.h>

int main(void) {


	int number1, number2;
	int op;

	printf("Please enter the first number: ");
	scanf("%d", &number1);

	printf("Please enter the second number: ");
	scanf("%d", &number2);

	printf("1-->ADD\n2-->SUBSTRACT\n3-->MULTIPLY\n4-->DIVISON\nPlease choose a operation: ");
	scanf("%d", &op);

	if (op == 1)
		printf("%d", number1 + number2);
	else if (op == 2)
		printf("%d", number1 - number2);
	else if (op == 3)
		printf("%d", number1 * number2);
	else if (op == 4)
		printf("%d", number1 / number2);
	else 
		printf("Invalid operator");

return 0;
}
