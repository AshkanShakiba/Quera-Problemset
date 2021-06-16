#include <iostream>
using namespace std;
int main(){
	int n,i,t=0;
	string s1,s2;
	cin>>n>>s1>>s2;
	for(i=0;i<n;i++){
		if(s1[i]!=s2[i]){
			t++;
		}
	}
	cout<<t;
}