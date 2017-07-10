//judge_whether_is_leap_year

#include <stdio.h>
#include <stdlib.h>

int main(){
	int year;
	printf("Enter the year:");
	scanf("%d",&year);

	if(year%400==0){
		printf("yes\n");
	}else if(year%100==0){
		printf("no\n");
	}else if(year%4==0){
		printf("yes\n");
	}else{
		printf("no\n");
	}

	system("pause");
	return 0;
}