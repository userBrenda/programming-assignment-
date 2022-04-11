// a program to determine if a number is even or odd
#include<stdio.h>

int main()
{
	int num;
	printf("\n\tEnter a number:\t");
	scanf("%d", &num);	
	
	if((num % 2) == 0){
		printf("\nEven");
	}
	else{
		printf("\nOdd");
	}
	return 0;
}