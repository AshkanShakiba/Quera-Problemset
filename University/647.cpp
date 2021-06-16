#include <iostream>
using namespace std;
int main(){
	int n,m,i,j,x,s=0;
	cin>>n>>m;
	for(i=-10;i<=m;i++){
		for(j=1;j<=n;j++){
			x=((i+j)*(i+j)*(i+j))/(j*j);
			s=s+x;
		}
	}
	cout<<s;
}