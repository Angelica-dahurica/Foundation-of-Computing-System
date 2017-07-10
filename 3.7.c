//change_time

#include <stdio.h>
#include <stdlib.h>

int main(){
	int second;
	printf("Enter the seconds:");
	scanf("%d",&second);
	
	int hour = second/3600;
	int min = (second - hour*3600)/60;
	second = second - min*60 - hour*3600;
	printf("%d hour(s) %d minute(s) %d second(s)\n", hour, min, second);

	system("pause");
	return 0;
}