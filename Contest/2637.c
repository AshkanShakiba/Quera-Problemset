#include <stdio.h>
int main(){
	int n,i,m=0;
	scanf("%d",&n);
	for(i=1;i<=n/2;i++){
		if((i+1)*(n-i+1)>m){
			m=(i+1)*(n-i+1);
		}
	}
	printf("%d",m);
}