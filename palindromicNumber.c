#include<stdio.h>
#include<stdlib.h>

int main(){

//A palindromic number (also known as a numeral palindrome or a numeric palindrome) is a number 
//(such as 16461) that remains the same when its digits are reversed. 

int number, op1, op2;

	printf("Please enter an integer between 100 and 999: ");
	scanf("%d", &number);

	op1 = number % 10;
	op2 = number / 100;

	if (number >= 100 && number <= 999) {

		if (op1 == op2)
			printf("%d is a palindromic number", number);
		else
			printf("%d is not a palindromic number", number);
	
    }
	else
		printf("****YOU IDIOT****");


return 0;
}