#include <iostream>
using namespace std;
int main(){
	string a[999],b[999];
	int y,x,j,i,an=0,bn=0;
	cin>>y>>x;
	for(j=1;j<=y;j++){
		cin>>a[j];
		for(i=0;i<x;i++){
			if(a[j][i]=='*'){
				an++;
			}
		}
	}
	for(j=1;j<=y;j++){
		cin>>b[j];
		for(i=0;i<x;i++){
			if(b[j][i]=='*'){
				bn++;
			}
		}
	}
	cout<<an<<" "<<bn;
}