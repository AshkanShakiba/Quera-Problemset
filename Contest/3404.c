#include <stdio.h>
int main(){
	int n;
	double m,BMI;
	scanf("%d%lf",&n,&m);
	BMI=n/(m*m);
	printf("%.2lf\n",BMI);
	if(BMI<18.5){
		printf("Underweight");
	}
	else if(BMI<25){
		printf("Normal");
	}
	else if(BMI<30){
		printf("Overweight");
	}
	else{
		printf("Obese");
	}
	return 0;
}