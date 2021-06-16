#include <iostream>
using namespace std;
int main(){
	int n,m,i,k;
	cin>>n>>m;
	string s[n+1],j[n+1];
	for(i=1;i<=n;i++){
		cin>>s[i]>>j[i];
	}
	string h;
	for(k=1;k<=m;k++){
		cin>>h;
		for(i=1;i<=n;i++){
			if(h==s[i]){
				cout<<j[i]<<" ";
			}
		}
		cout<<"kachal! ";
	}
}