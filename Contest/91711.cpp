#include <iostream>
using namespace std;
int ceil(double x){
	if((int)x==x){
		return x;
	}
	else{
		return (int)x+1;
	}
}
int main(){
	int n,x,y;
	cin>>n>>x>>y;
	int i,a[n],min,minIndex;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(i==0){
			min=a[0];
			minIndex=0;
		}
		else if(a[i]<min){
			min=a[i];
			minIndex=i;
		}
	}
	int have,need=0;
	have=(min/x);
	for(i=0;i<n;i++){
		if(i!=minIndex){
			need+=ceil((100-a[i])/(double)y);
			//cout<<"need("<<i<<") = "<<ceil((100-a[i])/(double)y)<<endl;
		}
	}
	if(need<=have){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}