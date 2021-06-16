#include <iostream>
using namespace std;
int main(){
	int n,m,i,j,c=0;
	int a[102][102];
	for(i=0;i<=101;i++){
		for(j=0;j<=101;j++){
			a[i][j]=0;
		}
	}
	cin>>n>>m;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(a[i][j-1]>a[i][j] && a[i][j+1]>a[i][j] && a[i-1][j]<a[i][j] && a[i+1][j]<a[i][j] && a[i-1][j]!=0 && a[i+1][j]!=0){
				c++;
			}
			else if(a[i-1][j]>a[i][j] && a[i+1][j]>a[i][j] && a[i][j-1]<a[i][j] && a[i][j+1]<a[i][j] && a[i][j-1]!=0 && a[i][j+1]!=0){
				c++;
			}
		}
	}
	cout<<c;
}