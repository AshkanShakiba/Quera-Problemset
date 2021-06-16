#include <stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	a=(12-a)%12;
	b=(60-b)%60;
	if(a<10 && b<10){
		printf("0%d:0%d",a,b);
	}
	else if(a<10){
		printf("0%d:%d",a,b);
	}
	else if(b<10){
		printf("%d:0%d",a,b);
	}
	else{
		printf("%d:%d",a,b);
	}
}