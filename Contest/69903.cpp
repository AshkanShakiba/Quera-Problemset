#include <iostream>
#include <iomanip>
using namespace std;
int datenum(int m,int d){
	if(m<=6){
		return (m-1)*31+d;
	}
	else if(m<=12){
		return 186+(m-7)*30+d;
	}
}
int main(){
	int m1,d1,m2,d2;
	cin>>m1>>d1>>m2>>d2;
	cout<<endl;
	if(datenum(m1,d1)>=datenum(m2,d2)){
		cout<<datenum(m1,d1)-datenum(m2,d2);
	}
	else{
		cout<<datenum(m2,d2)-datenum(m1,d1);
	}
}