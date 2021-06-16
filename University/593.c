#include <stdio.h>
int isPrime(int x){
	if(x==1 || x==0)
		return 0;
	int i;
	for(i=2;i<x;i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
int sumOfFigures(int num){
	int s=0;
	while(num>0){
		s=s+(num%10);
		num=num/10;
	}
	return s;
}
int main(){
	int n,b,i;
	scanf("%d",&n);
	b=sumOfFigures(n);
	for(i=0;i<b;i++){
		n++;
		while(!isPrime(n)){
			n++;
		}
	}
	printf("%d",n);
	return 0;
}