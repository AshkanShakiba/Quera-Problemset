#include <stdio.h>
#include <string.h>
int main(){
	int i,p=0;
	char str[5][1000];//h="HAFEZ",m="MOLANA";
	for(i=0;i<5;i++){
		gets(str[i]);
		if(strstr(str[i],"HAFEZ")!=NULL || strstr(str[i],"MOLANA")!=NULL){
			printf("%d ",i+1);
			p=1;
		}
	}
	if(p==0){
		printf("NOT FOUND!");
	}
}