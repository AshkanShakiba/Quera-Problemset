#include <stdio.h>
#include <string.h>
int main(){
	int i,j;
	char s[21];
	gets(s);
	for(i=0;i<strlen(s);i++){
		for(j=0;j<=i;j++){
			printf("%c",s[i]);
		}
		for(j=i+1;j<strlen(s);j++){
			printf("%c",s[j]);
		}
		printf("\n");
	}
	return 0;
}