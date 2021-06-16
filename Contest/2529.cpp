#include <iostream>
using namespace std;
int main(){
	bool p;
	int i,j,k;
	int n;
	cin>>n;
	int l[n+1],maxl=0;
	string s[n+1];
	for(i=1;i<=n;i++){
		cin>>s[i];
		l[i]=0;
		for(j=0;j<s[i].length();j++){
			p=true;
			for(k=0;k<j;k++){
				if(s[i][j]==s[i][k]){
					p=false;
				}
			}
			if(p==true){
				l[i]++;
			}
		}
		if(l[i]>maxl){
			maxl=l[i];
		}
	}
	cout<<maxl;
}