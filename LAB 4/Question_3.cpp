#include<stdio.h>
int main(){
	float original_amount, amount_saved, amount_after_discount;
	printf("Enter the price\n");
	scanf("%f",&original_amount);
	if(original_amount < 1500 && original_amount >= 0){
		amount_after_discount = original_amount * 0.93;
		amount_saved = 0.7*original_amount;
	}
	else if(original_amount >= 1500 && original_amount < 3000){
		amount_after_discount = original_amount * 0.88;
		amount_saved = 0.12*original_amount;
	}
	else if(original_amount >= 3000 && original_amount <= 5000){
		amount_after_discount = original_amount*0.78;
		amount_saved = original_amount*0.22;
	}
	else if(original_amount > 5000){
		amount_after_discount = original_amount*0.7;
		amount_saved = original_amount*0.3;
	}
	else{
		printf("Invalid Input");
	}
	printf("Original amount = %f\nAmount saved = %f\nAmount After discount = %f",original_amount,amount_saved,amount_after_discount);
	return 0;
}