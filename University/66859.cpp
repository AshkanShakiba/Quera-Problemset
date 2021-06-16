#include <iostream>
using namespace std;
int main(){
	int a,b,i=1,n=0,s[999];
	cin>>a>>b;
	while(a>0){
		s[i]=a%b;
		n=n+1;
		a=a/b;
		i++;
	}
	for(i=n;i>=1;i--){
		if(s[i]<10){
			cout<<s[i];
		}
		switch(s[i]){
			case 10:
				cout<<"A";
				break;
			case 11:
				cout<<"B";
				break;
			case 12:
				cout<<"C";
				break;
			case 13:
				cout<<"D";
				break;
			case 14:
				cout<<"E";
				break;
			case 15:
				cout<<"F";
				break;
		}
	}
}