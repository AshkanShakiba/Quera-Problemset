#include <iostream>
using namespace std;
int main(){
	int x,n;
	cin>>x>>n;
	if(n==0){
		cout<<20;
	}
	else if(n==7){
		cout<<x;
	}
	else{
		if(x-n>=0){
			cout<<x-n;
		}
		else{
			cout<<0;
		}
	}
}