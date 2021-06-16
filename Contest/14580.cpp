#include <iostream>
using namespace std;
int main(){
	int n,k,x,i,j;
	cin>>n>>k>>x;
	string c[n+1];
	for(i=1;i<=n;i++){
		cin>>c[i];
	}
	j=(x+k)%n;
	if(j==0){
		cout<<c[n];
	}
	else{
		cout<<c[j];
	}
}