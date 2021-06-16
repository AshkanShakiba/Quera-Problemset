#include <iostream>
using namespace std;
int main(){
	int n,i,a,b;
	cin>>n;
	int ras[n+1];
	for(i=0;i<=n;i++){
		ras[i]=0;
	}
	for(i=1;i<n;i++){
		cin>>a>>b;
		ras[a]++;
		ras[b]++;
	}
	int tr=0;
	for(i=0;i<=n;i++){
		if(ras[i]>tr){
			tr=ras[i];
		}
	}
	cout<<tr;
}