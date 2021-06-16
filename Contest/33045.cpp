#include <iostream>
using namespace std;
int main(){
	int n,i,k,sum=0,num=0;
	cin>>n;
	for(i=1;i<=n;i++){
		for(k=1;k<=i;k++){
			if(i%k==0){
				sum=sum+k;
				num++;
			}
		}
	}
	cout<<num<<" "<<sum;
}