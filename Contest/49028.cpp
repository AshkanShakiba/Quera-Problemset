#include <iostream>
using namespace std;
int main(){
	int n,v[1111],i,a=0;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>v[i];
	}
	for(i=2;i<=n;i++){
		if(v[i]!=v[i-1]){
			a++;
		}
	}
	cout<<a;
}