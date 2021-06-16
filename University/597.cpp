#include <iostream>
using namespace std;
int main(){
	int n,x,y,i;
	cin>>n;
	if((n-1)%4==0){
		x=-(n-1)/4;
		y=x;
	}
	else if((n-1)%4==1){
		x=(n+2)/4;
		y=-(n-2)/4;
	}
	else if((n-1)%4==2){
		x=(n+1)/4;
		y=x;
	}
	else if((n-1)%4==3){
		x=-n/4;
		y=-x;
	}	
	cout<<x<<"\t"<<y;
}