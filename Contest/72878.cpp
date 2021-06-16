#include <iostream>
using namespace std;
int main(){
	int t,a,b,d;
	cin>>t>>a>>b;
	d=a+b+2;
	if(t%d==0){
		cout<<t/d<<"\t"<<t/d;
	}
	else if(t%d<=a+1){
		cout<<t/d+1<<"\t"<<t/d;
	}
	else{
		cout<<t/d+1<<"\t"<<t/d+1;
	}
	return 0;
}