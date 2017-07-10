//caculate_the_sum_from_1_to_10

#include <stdio.h>
#include <stdlib.h>

int main(){
	int sum = 0;
	int i = 1;
	for(i = 1; i < 11; i++){
		sum += i;
	}
	printf("%i\n",sum);
	system("pause");
	return 0;
}