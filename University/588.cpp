#include <iostream>
using namespace std;
int main(){
	int n,i,x[11],max;
	cin>>n;
	cin>>x[1];
	max=x[1];
	for(i=2;i<=n;i++){
		cin>>x[i];
		if(x[i]>max){
			max=x[i];
		}
	}
	cout<<max;
}