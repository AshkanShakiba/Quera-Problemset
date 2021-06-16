#include <iostream>
using namespace std;
int tm(int n){
	int i,tm=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			tm=tm+1;
		}
	}
	return tm;
}
int main(){
	int k,n=1,i,hj;
	bool p=true;
	cin>>k;
	while(p==true){
		hj=0;
		for(i=1;i<=n;i++){
			hj=hj+i;
		}
		if(tm(hj)>=k){
			cout<<hj;
			p=false;
		}
		n++;
	}
	return 0;
}