#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n,i,a,b,s;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a>>b;
		s=(int)sqrt(b)-(int)sqrt(a);
		if((int)sqrt(a)==sqrt(a)) s++;
		cout<<s<<endl;
	}
	return 0;
}
