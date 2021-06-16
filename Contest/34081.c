#include <stdio.h>
int main(){
	int n,k,x=1,t=0,p=1;
	scanf("%d%d",&n,&k);
	while(p){
		x=(x+k)%n;
		if(x==1){
			p=0;
		}
		t++;
	}
	printf("%d",t);
}