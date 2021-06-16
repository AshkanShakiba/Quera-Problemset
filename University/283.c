#include <stdio.h>
void s(){
	printf("* ");
}
void p(){
	printf("  ");
}
void n(){
	printf("*\n");
}
int main(){
	int a,b,d,i,j;
	scanf("%d%d",&a,&b);
	if(b>=a){
		printf("Wrong order!");
		return 0;
	}
	d=a-b;
	if(d%2!=0){
		printf("Wrong difference!");
		return 0;
	}
	for(i=1;i<=d/2;i++){
		for(j=1;j<a;j++){
			s();
		}
		n();
	}
	for(i=1;i<=b;i++){
		for(j=1;j<=d/2;j++){
			s();
		}
		for(j=1;j<=b;j++){
			p();
		}
		for(j=1;j<d/2;j++){
			s();
		}
		n();
	}
	for(i=1;i<=d/2;i++){
		for(j=1;j<a;j++){
			s();
		}
		n();
	}
}