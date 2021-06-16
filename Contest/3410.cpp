#include <iostream>
using namespace std;
int main(){
	int n,a[12][12],i,j;
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			a[i][j]=0;
		}
	}
	a[1][1]=1;
	cin>>n;
	for(i=2;i<=n;i++){
		for(j=1;j<=i;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
}