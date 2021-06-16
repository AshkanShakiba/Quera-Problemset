#include <iostream>
using namespace std;
int main(){
	int i,n,x[101],y[101],t[101];
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>x[i]>>y[i];
		if(x[i]==y[i] && x[i]%2==0){
			t[i]=2*x[i];
		}
		else if(x[i]==y[i] && x[i]%2!=0){
			t[i]=2*x[i]-1;
		}
		else if(x[i]==y[i]+2 && x[i]%2==0){
			t[i]=2*x[i]-2;
		}
		else if(x[i]==y[i]+2 && x[i]%2!=0){
			t[i]=2*x[i]-3;
		}
		else{
			t[i]=-1;
		}
	}
	for(i=1;i<=n;i++){
		cout<<t[i]<<endl;
	}
	return 0;
}