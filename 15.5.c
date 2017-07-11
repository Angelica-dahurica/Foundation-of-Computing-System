//is_prime

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int x);

int main(){
	for(int i = 1; i < 100; ++i){
		if(is_prime(i)==1)
			printf("%d\n", i);
	}

	system("pause");
	return 0;
}

int is_prime(int x){
	if(x==1){
		return 0;
	}else if(x==2){
		return 1;
	}else{
		for(int i = 2; i < sqrt(x)+1; i++){
			if(x%i==0){
				return 0;
			}
		}
		return 1;
	}
}