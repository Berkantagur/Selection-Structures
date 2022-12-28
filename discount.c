#include<stdio.h>
#include<stdlib.h>

int main(){

    // ETİKET FİYATINA GÖRE YAPILAN İNDİRİM SONUCU TOPLAM ÖDEME
    //200 ve üzeri %20
    //100 ve 200 arası %15
    //100 altı %10

	int cost, totalpay;

	printf("Please enter sticker price: ");
	scanf("%d", &cost);

	if (cost >= 200) {
		totalpay = cost - cost * 20 / 100;
		printf("Amount you have to pay: %d TL", totalpay);
	}
	else if (cost < 200 && cost >= 100) {
		totalpay = cost - cost * 15 / 100;
		printf("Amount you have to pay: %d TL", totalpay);
	}
	else {
		totalpay = cost - cost * 10 / 100;
		printf("Amount you have to pay: %d TL", totalpay);
	}


	return 0;

}







