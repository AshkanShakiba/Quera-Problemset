#include <iostream>
#include <math.h>
using namespace std;
int Min(int x,int y){
	if(x<y)
		return x;
	return y;
}
int main(){
	int a1,b1,a2,b2,a3,b3,s;
	cin>>a1>>b1>>a2>>b2>>a3>>b3;
	cout<<Min(a1,b1)+Min(a2,b2)+Min(a3,b3);
	return 0;
}