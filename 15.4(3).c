//牛顿迭代法

//f(x)=x^(1/2) y(n+1)=(y(n)+x/(y(n)))/2

#include <stdio.h>
#include <stdlib.h>

double f(int x);

int main(){
	int x;
	printf("Enter the x:");
	scanf("%d",&x);

	printf("%f\n", f(x));

	system("pause");
	return 0;
}

double f(int x){
	if(x==0){
		return 0;
	}else{
		int n = 10;
		double res = x/2;
		while(n>0){
			res = (res+x/res)/2;
			n--;
		}
		return res;
	}
}