#include <iostream>
using namespace std;
long long int plusn(long long int n){
	long long int i,j,res=0,x;
	for(i=0;i<=18;i++){
		x=n;
		for(j=1;j<=i;j++){
			x=x/10;
		}
		res=res+x%10;
	}
	return res;
}
int main(){
	long long int n,m;
	cin>>n;
	while(n>=10){
		n=plusn(n);
	}
	cout<<n;
}