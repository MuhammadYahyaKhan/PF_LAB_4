#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a > b){
		if(a > 100 ){
			printf("first is significantly larger");
		
		}
		
		else{
			printf("first is larger");
		}
	}
	else if(a < b){
		if(a < 0){
		
		printf("First number is negative and smaller");
	}
		else{
			printf("first number is smaller");
		}
	}
	

	return 0;
}