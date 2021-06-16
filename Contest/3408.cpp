#include <iostream>
using namespace std;
int main(){
	int n,i;
	string s[101];
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>s[i];
	}
	for(i=n;i>0;i--){
		cout<<s[i]<<" ";
	}
}