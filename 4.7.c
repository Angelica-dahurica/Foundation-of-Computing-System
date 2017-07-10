//print the factorial

#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main(){
	int n = 9;

	printf("%d\n", factorial(n));

	system("pause");
	return 0;
}

int factorial(int n){
	int product = 1;
	int i = 1;
	for(i; i<10; i++){
		product *= i;
	}
	return product;
}