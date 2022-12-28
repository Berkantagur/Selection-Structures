#include<stdio.h>
#include<stdlib.h>

int main(){

//The reverse of the number
int number, one, two, three, four, five;

	printf("Please enter a five digits number: ");
	scanf("%d", &number);

	if(number>=10000&&number<100000){

	printf("The reverse of the number: ");

	one = number / 10000;
	two = (number / 1000) % 10;
	three = (number / 100) % 10;
	four = (number / 10) % 10 ;
	five = number % 10;
    
	printf("%d %d %d %d %d", five,four,three,two,one);
	
	}
	else
	printf("Invalid input!");

    return 0;
}