#include <iostream>
using namespace std;
int main(){
	double x1,x2,v1,v2;
	cin>>x1>>v1>>x2>>v2;
	if((x1<x2 && v1>v2)||(x1>x2 && v1<v2)){
		cout<<"SEE YOU";
	}
	else if((x1<x2 && v1<v2)||(x1>x2 && v1>v2)){
		cout<<"BORO BORO";
	}
	else if(v1==v2){
		cout<<"WAIT WAIT";
	}
}