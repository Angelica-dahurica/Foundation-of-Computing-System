//print_the_days_num

#include <stdio.h>
#include <stdlib.h>

int main(){
	int year;
	int month;
	printf("Enter the two num year & month:");
	scanf("%d",&year);
	scanf("%d",&month);

	if(month == 1 || month == 3 || month == 5 || month ==7 || month == 8 || month == 10 || month == 12){
		printf("%d\n", 31);
	}else if(month == 4 || month == 6 || month == 9 || month == 11){
		printf("%d\n", 30);
	}else if(month == 2){
		if(year%400==0){
			printf("29\n");
		}else if(year%100==0){
			printf("28\n");
		}else if(year%4==0){
			printf("29\n");
		}else{
			printf("28\n");
		}
	}

	system("pause");
	return 0;
}