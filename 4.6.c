//print the f(n)

#include <stdio.h>
#include <stdlib.h>

int f(int n);

int main(){
	int n;
	printf("Enter the n:");
	scanf("%d",&n);

	printf("%d\n", f(n));

	system("pause");
	return 0;
}

int f(int n){
	if(n == 0){
		return 1;
	}else if(n == 1){
		return 1;
	}else{
		return f(n-1)+f(n-2);
	}
}