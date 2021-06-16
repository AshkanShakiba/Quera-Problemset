#include <iostream>
using namespace std;
int main(){
	bool p=true;
	int n,i,j[999];
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>j[i];
	}
	for(i=2;i<n;i++){
		if(j[i]>j[i-1] && j[i]>j[i+1]){
			p=false;
		}
	}
	switch(p){
		case true:
			cout<<"Bah Bah! Ajab jooji!";
			break;
		case false:
			cout<<"Ey baba :(";
			break;
	}
}