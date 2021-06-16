#include <stdio.h>
int main(){
	int r,c;
	scanf("%d%d",&r,&c);
	if(c<=10){
		printf("Right %d %d",11-r,c);
	}
	else{
		printf("Left %d %d",11-r,21-c);
	}
}