#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[n],i,s=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
		s+=a[i]*b[i];
	}
	printf("%d",s);
}