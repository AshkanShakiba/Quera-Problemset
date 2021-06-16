#include <iostream>
using namespace std;
int main(){
	bool q;
	int k,i,j,n=0;
	cin>>k;
	string p,c;
	cin>>p;
	for(i=0;i<k;i++){
		cin>>c;
		for(j=0;j<5;j++){
			if(c[j]==p[i]){
				n=n+j;
				//cout<<j<<endl;
			}
		}
		for(j=5;j<9;j++){
			if(c[j]==p[i]){
				n=n+(9-j);
				//cout<<9-j<<endl;
			}
		}
	}
	cout<<n;
}