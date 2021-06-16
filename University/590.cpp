#include <iostream>
using namespace std;
unsigned long long int gcd(unsigned long long int a,unsigned long long int b){
	if(b==0){
		return a;
	}
	else{
		return gcd(b,a%b);
	}
}
int main(){
	unsigned long long int x,y;
	cin>>x>>y;
	cout<<gcd(x,y)<<" "<<(x*y)/gcd(x,y);
}