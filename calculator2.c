#include<stdio.h>
#include<stdlib.h>

int main(){

    char op;
	int firstNumber, secondNumber;


	printf("Please enter an operator (+,-,*,/): ");
	scanf("%c", &op);

	printf("Please enter two numbers: ");
	scanf("%d %d", &firstNumber, &secondNumber);


	switch (op)
	{
	case '+':
		printf("%d + %d = %d", firstNumber, secondNumber, firstNumber + secondNumber);
		break;
	case '-':
		printf("%d - %d = %d", firstNumber, secondNumber, firstNumber - secondNumber);
		break;
	case '*':
		printf("%d * %d = %d", firstNumber, secondNumber, firstNumber * secondNumber);
		break;
	case '/':
		printf("%d / %d = %d", firstNumber, secondNumber, firstNumber / secondNumber);
		break;
	default:
		printf("Invalid input! Please enter a valid operator");

	}

    return 0;
}