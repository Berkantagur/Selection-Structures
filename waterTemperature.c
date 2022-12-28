#include<stdio.h>
#include<stdlib.h>

int main(){

//Suyun derecesine göre hali

	int water;

	printf("Enter the temperature value of the water: ");
	scanf("%d", &water);

	if (water <= 0) {
		printf("Water is in the form of ice...");
	}
	else if (water > 0 && water <= 100) {
		printf("Water is in the form of liquid...");
	}
	else {
		printf("Water is in the form of gas...");
	}

return 0;
}