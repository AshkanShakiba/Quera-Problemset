#include <stdio.h>
int main(){
	int n,m,i,j,t=0;
	scanf("%d%d",&n,&m);
	char s[n][m];
	for(i=0;i<n;i++){
		scanf("%s",s[i]);
		for(j=0;j<m;j++){
			if(s[i][j]=='*'){
				t++;
			}
		}
	}
	printf("%d",t);
}