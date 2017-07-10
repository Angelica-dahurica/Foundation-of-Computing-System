//1
//2 2
//3 3 3
//4 4 4 4

#include <stdio.h>
#include <stdlib.h>

void f(int n);

int main(){
	int n;
	printf("Enter the n:");
	scanf("%d",&n);

	int i = 1;
	for(i; i<=n; i++){
		f(i);
		printf("\n");
	}

	system("pause");
	return 0;
}

void f(int n){
	int i = 0;
	for(i; i<n; i++){
		printf("%d ", n);
	}
}