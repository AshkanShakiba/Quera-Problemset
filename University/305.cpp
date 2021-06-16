#include <iostream>
using namespace std;
unsigned long long int BMM(unsigned long long int num1,unsigned long long int num2){
	unsigned long long int n;
	unsigned long long int a0,a1,a2=1;
	if(num1>=num2){
		a1=num1;
		a2=num2;
	}
	else{
		a1=num2;
		a2=num1;
	}
	while(a2>0){
		a0=a1;
		a1=a2;
		n=a0/a1;
		a2=a0-n*a1;
	}
	return a1;
}
int main(){
	unsigned long long int num1,num2;
	cin>>num1;
	cin>>num2;
	cout<<BMM(num1,num2);
}