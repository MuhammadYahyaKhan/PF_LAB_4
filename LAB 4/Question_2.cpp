#include<stdio.h>

int main(){
	float units, bill;
	printf("Enter the units\n");
	scanf("%f",&units);
	if(units < 0){
		printf("units should be a positive real number ");
	}
	else{
		if(units >= 0 && units <= 30){
			bill = units*0.6;
		}
		else if(units > 30 && units <=110){
			bill = 18 + (units - 30)*0.85;
		}
		else if(units > 110 && units <=210){
			bill = 86 + (units - 110)*1.3;
		}
		else if(units > 210){
			bill = 216 + (units - 210)*1.3;
		}
		else{
			printf("Invalid Data type");
		}
	}
	
	printf("Your bill is %fPKR",bill);
	return 0;
}