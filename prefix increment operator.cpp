#include <stdio.h>
int prefixIncrement(int *num){
	(*num)++; 
	return *num;
}
int main() {
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	printf("Orignal value of x: %d\n", x);
	int y = prefixIncrement(&x); //call the function passing adress of x
	printf("Value of x after prefix increment: %d\n", x);
	return 0;
}
