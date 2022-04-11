
#include <stdio.h>

int main(){
	float val;
	printf("Enter a number:\t");
	scanf("%f",&val);
	
	if(val < 0){
		printf(" Negative Number");
	}
	else{
		printf(" positive Number");
	}
	
	return 0;
}