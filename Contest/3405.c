#include <stdio.h>
int main(){
	int a[1001],i=1,p=1;
	while(p==1){
		scanf("%d",&a[i]);
		if(a[i]==0){
			p=0;
		}
		i++;
	}
	for(i=i-2;i>0;i--){
		printf("%d\n",a[i]);
	}
}