#include<stdio.h>

int main(){
	float marks;
	printf("Enter marks\n");
	scanf("%f",&marks);
	if(marks > 100){
		printf("Invalid input\n");
	}
	else{
		if(marks >= 90 && marks <= 100){
			printf("A\n");
		}
		else if(marks >= 80 && marks < 90){
			printf("B\n");
		}
		else if(marks >= 70 && marks < 80){
			printf("C\n");
		}
		else if(marks >= 60 && marks < 70){
			printf("D\n");
		}
		else{
			printf("F\n");
		}
	}
	return 0;
}