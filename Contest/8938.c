#include <stdio.h>
int main(){
	int n,m,i,j,x,y,s=0;
	scanf("%d%d",&n,&m);
	int a[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		scanf("%d%d",&x,&y);
		s=s+a[x-1][y-1];
	}
	printf("%d",s);
	return 0;
}