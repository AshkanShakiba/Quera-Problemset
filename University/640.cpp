#include <iostream>
using namespace std;
double BMM(double num1,double num2){
	int n;
	double a0,a1,a2=1;
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
	double num1,num2;
	cin>>num1;
	cin>>num2;
	if(num1<0){
		num1=-1*num1;
	}
	if(num2<0){
		num2=-1*num2;
	}
	cout<<BMM(num1,num2);
}