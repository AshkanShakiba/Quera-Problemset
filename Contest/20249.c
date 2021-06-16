#include <stdio.h>
int main(){
	int n,k,s=0,a,i;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		s=s+a;
	}
	printf("%d",(n*k-s)/k);
}