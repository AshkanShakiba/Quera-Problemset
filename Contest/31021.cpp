#include <iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	string name[n+1];
	for(i=1;i<=n;i++){
		cin>>name[i];
	}
	for(i=2;i<=n;i++){
		for(j=i-1;j>=1;j--){
			cout<<name[i]<<": salam "<<name[j]<<"!\n";
		}
	}
	for(i=1;i<=n;i++){
		cout<<name[i]<<": khodafez bacheha!\n";
		for(j=i+1;j<=n;j++){
			cout<<name[j]<<": khodafez "<<name[i]<<"!\n";
		}
	}
	return 0;
}