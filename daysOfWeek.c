#include<stdio.h>
#include<stdlib.h>

int main(){

//Bugün günlerden pazartesi ve kullanıcının girdiği sayı kadar sonra hangi gün olduğunu bulma

int numofdays, op;

printf("Please enter a number: ");
scanf("%d", &numofdays);

op = numofdays % 7;

switch (op) {

case 0 :
	printf("Monday");
	break;
case 1:
	printf("Tuesday");
	break;
case 2:
	printf("Wednesday");
	break;
case 3:
	printf("Thursday");
	break;
case 4:
	printf("Friday");
	break;
case 5:
	printf("Saturday");
	break;
case 6:
	printf("Sunday");
	break;

default:
	printf("Invalid input");

}

	return 0;
}