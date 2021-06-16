#include <stdio.h>
int main(){
	int k,i,s=0;
	scanf("%d",&k);
	for(i=1;i<=k;i++){
		s+=i;
	}
	printf("%d",s);
}