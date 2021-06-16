#include <iostream>
#include <math.h>
using namespace std;
unsigned long long int s(double x){
	if(x==(unsigned long long int)x)
		return x;
	return (unsigned long long int)x+1;
}
unsigned long long int Min(unsigned long long int x,unsigned long long int y){
	if(x<y)
		return x;
	return y;
}
int main(){
	double n,m,a,b;
	cin>>n>>m>>a>>b;
	cout<<Min(Min(s(n/a),s(n/b)),Min(s(m/a),s(m/b)));
	return 0;
}