#include <stdio.h>
int main(){
	int x,y,r,dx,dy;
	scanf("%d%d%d%d%d",&x,&y,&r,&dx,&dy);
	if(x<=dx && dx<=x+r && y-r<=dy && dy<=y){
		printf("Mahdi");
	}
	else{
		printf("Parsa");
	}
	return 0;
}