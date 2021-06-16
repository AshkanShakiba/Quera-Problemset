#include <iostream>
using namespace std;
int main(){
	double n,k,i;
	cin>>n>>k;
	for(i=1;i<=k;i++){
		n=n/2;
	}
	if(n>=0){
		cout<<(int)n;
	}
	else{
		if(int(n)==n){
			cout<<(int)n;
		}
		else{
			cout<<(int)n-1;
		}
	}
}