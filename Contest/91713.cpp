#include <iostream>
using namespace std;
int f(string s){
	int i,j,cnt;
	for(i=48;i<58;i++){
		cnt=0;
		for(j=0;j<8;j++){
			if(s[j]==(char)i){
				cnt++;
			}
		}
		if(cnt>=4){
			return 1;
		}
	}
	return 0;
}
int g(string s){
	int i;
	for(i=0;i<6;i++){
		if(s[i]==s[i+1] && s[i+1]==s[i+2]){
			return 1;
		}
	}
	return 0;
}
int h(string s){
	if(s[0]==s[7] && s[1]==s[6] && s[2]==s[5] && s[3]==s[4]){
		return 1;
	}
	return 0;
}
int main(){
	int n,i;
	cin>>n;
	string s;
	for(i=0;i<n;i++){
		cin>>s;
		if(f(s) || g(s) || h(s)){
			cout<<"Ronde!"<<endl;
		}
		else{
			cout<<"Rond Nist"<<endl;
		}
	}
}