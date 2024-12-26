#include <stdio.h>
int postfixIncrement(int *num) {
	int orignalValue = *num; 
	(*num)++;
	return orignalValue;
}
int main() {
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	printf("Orignal value of x: %d\n", x);
	int y = postfixIncrement(&x) ; 
	printf("Value of x after psotfix increment: %d\n", x);
	printf("Value returned by postfixIncrement (y): %d\n", y);
	return 0;
}
