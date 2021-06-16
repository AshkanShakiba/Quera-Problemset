#include <iostream>
using namespace std;
int main(){
	string s;
	bool w[7];
	int i,n1,n2,n3,n=0;
	for(i=0;i<=6;i++){
		w[i]=true;
	}
	cin>>n1;
	for(i=1;i<=n1;i++){
		cin>>s;
		if(s=="shanbe"){
			w[0]=false;
		}
		else if(s=="1shanbe"){
			w[1]=false;
		}
		else if(s=="2shanbe"){
			w[2]=false;
		}
		else if(s=="3shanbe"){
			w[3]=false;
		}
		else if(s=="4shanbe"){
			w[4]=false;
		}
		else if(s=="5shanbe"){
			w[5]=false;
		}
		else if(s=="jome"){
			w[6]=false;
		}
	}
	cin>>n2;
	for(i=1;i<=n2;i++){
		cin>>s;
		if(s=="shanbe"){
			w[0]=false;
		}
		else if(s=="1shanbe"){
			w[1]=false;
		}
		else if(s=="2shanbe"){
			w[2]=false;
		}
		else if(s=="3shanbe"){
			w[3]=false;
		}
		else if(s=="4shanbe"){
			w[4]=false;
		}
		else if(s=="5shanbe"){
			w[5]=false;
		}
		else if(s=="jome"){
			w[6]=false;
		}
	}
	cin>>n3;
	for(i=1;i<=n3;i++){
		cin>>s;
		if(s=="shanbe"){
			w[0]=false;
		}
		else if(s=="1shanbe"){
			w[1]=false;
		}
		else if(s=="2shanbe"){
			w[2]=false;
		}
		else if(s=="3shanbe"){
			w[3]=false;
		}
		else if(s=="4shanbe"){
			w[4]=false;
		}
		else if(s=="5shanbe"){
			w[5]=false;
		}
		else if(s=="jome"){
			w[6]=false;
		}
	}
	for(i=0;i<=6;i++){
		if(w[i]==true){
			n=n+1;
		}
	}
	cout<<n;
}