#include <stdio.h>
int main(){
	int x1,y1,x2,y2;
	scanf("%d%d",&x1,&y1);
	scanf("%d%d",&x2,&y2);
	if(x1>=x2 && y1>=y2){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}
