#include <stdio.h>
int main(){
	int n,i;
	char s[7][2]={"sa","se","si","so","su","sq","sp"};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		puts(s[i]);
	}
}