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
	return p;
}
int main(){
	bool aval=true;
	int a,b,i;
	cin>>a>>b;
	for(i=a+1;i<b;i++){
		if(isprime(i)==true){
			if(aval==false){
				cout<<","<<i;
			}
			else{
				cout<<i;
				aval=false;
			}
		}
	}
}