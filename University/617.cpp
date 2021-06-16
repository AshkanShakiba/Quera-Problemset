#include <iostream>
using namespace std;
int main(){
	int i,l,x;
	string s,sp;
	cin>>s;
	l=s.length();
	sp=s;
	for(i=0;i<=l/2;i++){
		sp[i]=s[l-i-1];
		sp[l-i-1]=s[i];
	}
	if(sp==s){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}