#include <stdio.h>
int fibo(int n){
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	return fibo(n-2)+fibo(n-1);
}
int isFibo(int n){
	int i=1;
	while(fibo(i)<n){
		i++;
	}
	if(n==fibo(i))
		return 1;
	return 0;
}
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(isFibo(i)){
			printf("+");
		}
		else{
			printf("-");
		}
	}
	return 0;
}