#include <iostream>
using namespace std;
int main(){
	bool p;
	int n,t[10],i,j,hz=1,kmm;
	cin>>n;
	/*for(i=1;i<=10;i++){
		t[i]=1;
	}*/
	for(i=1;i<=n;i++){
		cin>>t[i];
	}
	for(i=1;i<=n;i++){
		hz=hz*t[i];
	}
	for(j=hz;j>=1;j--){
		p=true;
		for(i=1;i<=n;i++){
			if(j%t[i]!=0){
				p=false;
			}
		}
		if(p==true){
			kmm=j;
		}
	}
	cout<<(kmm+1)%30;
}