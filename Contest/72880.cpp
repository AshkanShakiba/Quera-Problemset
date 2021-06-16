#include <iostream>
using namespace std;
int main(){
	bool ag=true;
	int a,b,c,d,m;
	cin>>a>>b>>c>>d>>m;
	if(b+m*d>a+m*c){
		ag=false;
	}
	if(ag==true){
		if(c>d){
			cout<<"Eyval baba!";
		}
		else{
			cout<<"Naaa, eshtebahe!";
		}
	}
	else{
		if(c<d){
			cout<<"Eyval baba!";
		}
		else{
			cout<<"Naaa, eshtebahe!";
		}
	}	
}