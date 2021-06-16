#include <stdio.h>
int main(){
	int a,b,l,x;
	scanf("%d%d%d",&a,&b,&l);
	if(l%2==0){
		printf("%d",(l/2)*(a+b));
	}
	else{
		printf("%d",(l/2)*(a+b)+a);
	}
	return 0;
}