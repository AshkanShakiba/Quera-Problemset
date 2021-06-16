#include <iostream>
using namespace std;
int max(int a,int b, int c){
	int max=a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	return max;
}
int main(){
	int N,i,nk=0,nn=0,ns=0;
	string a;
	cin>>N;
	cin>>a;
	string k="331122",n="123",s="2123";
	for(i=0;i<N;i++){
		if(a[i]==k[i%6]){
			nk++;
		}
		if(a[i]==n[i%3]){
			nn++;
		}
		if(a[i]==s[i%4]){
			ns++;
		}
	}
	cout<<max(nk,nn,ns)<<endl;
	if(nk==max(nk,nn,ns)){
		cout<<"keyvoon"<<endl;
	}
	if(nn==max(nk,nn,ns)){
		cout<<"nezam"<<endl;
	}
	if(ns==max(nk,nn,ns)){
		cout<<"shir farhad"<<endl;
	}
}