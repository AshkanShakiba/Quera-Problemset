#include <stdio.h>
int main(){
	int n,m,p,q,i,j,k,a;
	scanf("%d%d%d",&n,&m,&q);
	p=m;
	int A[n][m],B[p][q],AB[n][q];
	if(m!=p){
		printf("Invalid!");
		return 0;
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<q;j++){
			a=0;
			for(k=0;k<m;k++){
				a=a+A[i][k]*B[k][j];
			}
			AB[i][j]=a;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<q-1;j++){
			printf("%d ",AB[i][j]);
		}
		printf("%d\n",AB[i][q-1]);
	}
	return 0;
}