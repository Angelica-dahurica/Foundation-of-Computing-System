//f(x,y)=x^y

#include <stdio.h>
#include <stdlib.h>

double f(double x, int y);

int main(){
	double x;
	int y;
	printf("Enter the x, y:");
	scanf("%lf",&x);
	scanf("%d",&y);

	printf("%f\n", f(x,y));

	system("pause");
	return 0;
}

double f(double x, int y){
	double i = 1.0;
	double res = 1;
	for(i; i<=y; i++)
		res *= x;
	return res;
}