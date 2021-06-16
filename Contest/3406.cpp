#include <iostream>
using namespace std;
int main(){
	int a,b,ap,bp;
	cin>>a>>b;
	ap=(a/100)+(a%100-a%10)+(a%10)*100;
	bp=(b/100)+(b%100-b%10)+(b%10)*100;
	if(ap>bp){
		cout<<b<<" < "<<a;
	}
	if(ap<bp){
		cout<<a<<" < "<<b;
	}
	if(ap==bp){
		cout<<a<<" = "<<b;
	}
}