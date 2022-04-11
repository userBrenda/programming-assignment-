//program to give discount
#include <stdio.h>

int main(){
	float amount, discount; 
	
	printf("\t\nAmount purchased = ");
	scanf("%f", &amount); 
	
	if(amount > 5000){
		discount = 0.1 * amount; 
		
		//update the amount if you like
		amount = amount - discount;
	}
	
	return 0;
	
}