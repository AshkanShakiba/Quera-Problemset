#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],i,j,k,s,max=-1;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			s=0;
			for(k=i;k<=j;k++){
				s+=a[k];
			}
			if(s>max){
				max=s;
			}
		}
	}
	if(max<0){
		printf("0");
	}
	else{
		printf("%d",max);
	}
	return 0;
}