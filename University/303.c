#include <stdio.h>
void f(int n1,int n2){
	if(n2==1){
		printf("1");
	}
	else{
		printf("%d\n",n1);
		f(n2-n1,n1);
	}
}
int main(){
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	f(n1,n2);
}