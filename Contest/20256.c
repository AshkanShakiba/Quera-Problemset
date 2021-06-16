#include <stdio.h>
int main(){
	int r,y,g,i,p=1;
	r=y=g=0;
	char c;
	for(i=0;i<5;i++){
		scanf("%c",&c);
		switch(c){
			case 'R':
				r++;
				break;
			case 'Y':
				y++;
				break;
			case 'G':
				g++;
		}
	}
	if(r>2){
		p=0;
	}
	else if(r>1 && y>1){
		p=0;
	}
	else if(g==0){
		p=0;
	}
	switch(p){
		case 1:
			printf("rahat baash");
			break;
		case 0:
			printf("nakhor lite");
	}
	return 0;
}