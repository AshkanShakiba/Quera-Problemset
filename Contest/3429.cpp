#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	if(t<0){
		cout<<"Ice";
	}
	else if(t>100){
		cout<<"Steam";
	}
	else{
		cout<<"Water";
	}
}