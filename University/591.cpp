#include <iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	for(j=1;j<=n;j++){
		cout<<"*";
	}
	cout<<endl;
	for(i=2;i<=n-1;i++){
		cout<<"*";
		for(j=2;j<=n-1;j++){
			cout<<" ";
		}
		cout<<"*"<<endl;
	}
	for(j=1;j<=n;j++){
		cout<<"*";
	}
}