#include <iostream>
using namespace std;
int main(){
	int n,i;
	double k,c[111],v=0;
	cin>>n>>k;
	for(i=1;i<=n;i++){
		cin>>c[i];
		v=v+c[i];
	}
	if(v>=k){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}