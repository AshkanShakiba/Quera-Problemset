#include <iostream>
using namespace std;
int main(){
	int n,i,j,max;
	cin>>n;
	int t[n];
	for(i=0;i<n;i++){
		t[i]=0;
	}
	string esm[n],famil;
	for(i=0;i<n;i++){
		cin>>esm[i]>>famil;
		for(j=0;j<i;j++){
			if(esm[j]==esm[i]){
				t[j]++;
				t[i]++;
			}
		}
	}
	max=t[0];
	for(i=1;i<n;i++){
		if(t[i]>max){
			max=t[i];
		}
	}
	cout<<max+1;
	return 0;
}