#include <iostream>
using namespace std;
int main(){
	string s;
	int i,t=1;
	cin>>s;
	for(i=1;i<=s.length();i++){
		if(s[i-1]=='T'){
			t=t*2;
		}
		else if(s[i-1]=='D'){
			t=t*2;
		}
		else if(s[i-1]=='L'){
			t=t*2;
		}
		else if(s[i-1]=='F'){
			t=t*2;
		}
	}
	cout<<t;
}