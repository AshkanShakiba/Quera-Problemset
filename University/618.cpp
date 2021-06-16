#include <iostream>
using namespace std;
int main(){
	int n,i,j,sp;
	cin>>n;
	n=2*n+1;
	for(i=1;i<=n;i=i+2){
		sp=(n-i)/2;
		for(j=1;j<=sp;j++){
			cout<<" ";
		}
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(i=n-2;i>=1;i=i-2){
		sp=(n-i)/2;
		for(j=1;j<=sp;j++){
			cout<<" ";
		}
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}	
}