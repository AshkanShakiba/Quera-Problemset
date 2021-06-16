#include <stdio.h>
int main(){
	double n,m;
	scanf("%lf%lf",&n,&m);
	n=n/m;
	if((int)n==n){
		printf("%d",(int)n);
	}
	else{
		printf("%d",((int)n)+1);
	}
}