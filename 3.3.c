//print_the_bigger

#include <stdio.h>
#include <stdlib.h>

int main(){
	int a;
	int b;
	printf("Enter the two num:");
	scanf("%d",&a);
	scanf("%d",&b);
	
	printf("%d\n", a >= b ? a : b);

	system("pause");
	return 0;
}