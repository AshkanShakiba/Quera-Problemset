#include <iostream>
using namespace std;
int adad(char c){
	return c-48;
}
int main(){
	string s;
	int i,j;
	cin>>s;
	for(i=0;i<s.length();i++){
		cout<<s[i]<<": ";
		for(j=0;j<adad(s[i]);j++){
			cout<<s[i];
		}
		cout<<endl;
	}
}