#include <iostream>
using namespace std;
int main(){
	int a[12],i,max;
	cin>>a[0];
	max=0;
	for(i=1;i<=11;i++){
		cin>>a[i];
		if(a[i]>a[max]){
			max=i;
		}
	}
	if(max==0 || max==1 || max==2){
		cout<<1;
	}
	if(max==3 || max==4 || max==5){
		cout<<2;
	}
	if(max==6 || max==7 || max==8){
		cout<<3;
	}
	if(max==9 || max==10 || max==11){
		cout<<4;
	}
}