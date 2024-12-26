#include <stdio.h>
int prefixDecrement(int *num) {
	(*num)--;
	return *num;
}
int main(){
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	printf("Orignal value of x: %d\n", x);
	int y = prefixDecrement(&x); 
	printf("Value of x after prefix decrement: %d\n", x);
	printf("Value returned by prefixDecrement (y): %d\n", y);
	return 0;
}
