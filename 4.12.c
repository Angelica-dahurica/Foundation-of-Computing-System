//pi

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Enter the n:");
	scanf("%d",&n);

	double pi = 0;
	int i = 1;
	for(i;i<=n;i++){
		double s = 0.0;
		if(i%2==0){
			s = -4.0/(2*i-1);
		}else{
			s = 4.0/(2*i-1);
		}
		pi += s;
	}

	printf("%f\n", pi);

	system("pause");
	return 0;
}