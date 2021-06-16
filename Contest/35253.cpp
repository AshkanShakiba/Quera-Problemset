#include <iostream>
using namespace std;
int main(){
	int n,w[101],m,i;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>w[i];
	}
	if(w[1]>w[2]){
		m=1;
	}
	if(w[2]>w[1]){
		m=2;
	}
	for(i=3;i<=n;i++){
		if(w[i]>w[m]){
			m=i;
		}
	}
	cout<<m;
}