#include <iostream>
using namespace std;
int main(){
	int n,a[111],i;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	for(i=1;i<=n;i++){
		switch(a[i]){
			case 2:
				cout<<"**";
				break;
			case 3:
				cout<<"***";
				break;
			default:
				cout<<"*";
		}
		cout<<endl;
	}
}