//program to determine if a no is divisible by five or not
#include <stdio.h>

int main(){
	int num;
	printf("\n\tEnter a number:\t");
	scanf("%d",&num); 
	
	if(num % 5 == 0){
		printf("\nDivible by five\n");
	}
	else{
		printf("\nNot Divisible\n");
	}
	
	return 0;
}
