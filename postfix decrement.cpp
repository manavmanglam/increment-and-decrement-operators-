#include <stdio.h>
int postfixDecrement(int *num) {
	int orignalValue = *num;
	(*num)--;
	return orignalValue;
}
int main() {
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	printf("Orignal value of x: %d\n", x);
	int y = postfixDecrement(&x);
	printf("Value of x after postfix decrement: %d\n", x);
	printf("Value returned by postfixDecrement (y): %d\n", y);
	return 0;
}
