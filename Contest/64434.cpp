#include <iostream>
using namespace std;
int main(){
	int n,m,i,j,t=1;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(t%2==1){
				cout<<"X";
			}
			else{
				cout<<".";
			}
		}
		t=t+1;
		for(j=m+1;j<=2*m;j++){
			if(t%2==1){
				cout<<"X";
			}
			else{
				cout<<".";
			}
		}
		t=t+1;
		for(j=2*m+1;j<=3*m;j++){
			if(t%2==1){
				cout<<"X";
			}
			else{
				cout<<".";
			}
		}
		if(i==n){
			t=t+1;
		}
		cout<<endl;
	}
	for(i=n+1;i<=2*n;i++){
		for(j=1;j<=m;j++){
			if(t%2==1){
				cout<<"X";
			}
			else{
				cout<<".";
			}
		}
		t=t+1;
		for(j=m+1;j<=2*m;j++){
			if(t%2==1){
				cout<<"X";
			}
			else{
				cout<<".";
			}
		}
		t=t+1;
		for(j=2*m+1;j<=3*m;j++){
			if(t%2==1){
				cout<<"X";
			}
			else{
				cout<<".";
			}
		}
		if(i==2*n){
			t=t+1;
		}
		cout<<endl;
	}
	for(i=2*n+1;i<=3*n;i++){
		for(j=1;j<=m;j++){
			if(t%2==1){
				cout<<"X";
			}
			else{
				cout<<".";
			}
		}
		t=t+1;
		for(j=m+1;j<=2*m;j++){
			if(t%2==1){
				cout<<"X";
			}
			else{
				cout<<".";
			}
		}
		t=t+1;
		for(j=2*m+1;j<=3*m;j++){
			if(t%2==1){
				cout<<"X";
			}
			else{
				cout<<".";
			}
		}
		if(i==3*n){
			t=t+1;
		}
		cout<<endl;
	}
}