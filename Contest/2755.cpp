#include <iostream>
using namespace std;
int main(){
	int n,m,k,i,j,x,y,ip,jp=-1;
	bool kb[1001][1001];
	for(i=0;i<1001;i++){
		for(j=0;j<1001;j++){
			kb[i][j]=true;
		}
	}
	cin>>n>>m>>k;
	for(i=1;i<=k;i++){
		cin>>x>>y;
		kb[x][y]=false;
	}
	if(k%2==0){
		for(i=1;i<=n;i++){
			for(j=1;j<=m;j++){
				if(kb[i][j]==true){
					ip=i;
					jp=j;
				}
			}
		}
		if(jp==-1){
			cout<<-1;
		}
		else{
			cout<<1<<endl<<ip<<" "<<jp;
		}
	}
	else{
		cout<<0;
	}
}