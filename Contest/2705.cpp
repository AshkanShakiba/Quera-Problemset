#include <iostream>
using namespace std;
int main(){
	int p,d,dp;
	cin>>p>>d;
	dp=d;
	while(dp%p>p/2){
		dp=dp+d;
	}
	cout<<dp;
}