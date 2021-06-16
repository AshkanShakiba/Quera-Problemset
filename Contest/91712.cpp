#include <iostream>
using namespace std;
int main(){
	int x1,x2;
	cin>>x1>>x2;
	if(x1==x2){
		cout<<"Saal Noo Mobarak!";
	}
	else if(x1<x2){
		cout<<"R";
		x1++;
	}
	else if(x1>x2){
		cout<<"L";
		x1--;
	}
	if(x1<x2){
		cout<<"R";
	}
	if(x1>x2){
		cout<<"L";
	}
}