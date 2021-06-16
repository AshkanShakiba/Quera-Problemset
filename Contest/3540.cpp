#include <iostream>
using namespace std;
int main(){
	int n,x,y,i,j,d=0;
	cin>>n>>x>>y;
	for(i=0;i<=n/x;i++){
		for(j=0;j<=n/y;j++){
			if(i*x+j*y==n){
				cout<<i<<" "<<j;
				return 0;
			}
		}
	}
	cout<<-1;
	return 0;
	
}