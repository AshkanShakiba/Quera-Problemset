#include <math.h>
#include <iostream>
using namespace std;
bool isprime(int n){
	int i;
	bool p=true;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			p=false;
		}
	}
	if(n==1){
		return false;
	}
	else{
	return p;
	}
}
int main(){
	int a,b,i;
	cin>>a>>b;
	for(i=a;i<=b;i++){
		if(isprime(i)==true){
			cout<<i<<endl;
		}
	}
}