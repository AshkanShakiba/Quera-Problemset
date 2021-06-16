#include <iostream>
using namespace std;
int main(){
	int n,i,j,t[22];
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>t[i];
	}
	if(t[2]>=t[1]){
		j=1;
		i=2;
		while(t[j]<=t[i] && i<=n){
			i++;
			j++;
		}
		while(t[j]>t[i] && i<=n){
			i++;
			j++;
		}
		i--;
		if(i==n){
			cout<<"Yes\n";
		}
		else{
			cout<<"No\n";
		}
	}
	else{
		j=1;
		i=2;
		while(t[j]>=t[i] && i<=n){
			i++;
			j++;
		}
		while(t[j]<t[i] && i<=n){
			i++;
			j++;
		}
		i--;
		if(i==n){
			cout<<"Yes";
		}
		else{
			cout<<"No";
		}
	}
}