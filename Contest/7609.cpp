#include <iostream>
using namespace std;
int main(){
	string str;
	cin>>str;
	int i,s=0;
	bool isOk=true;
	if(str.length()<2){
		isOk=false;
	}
	for(i=1;i<str.length();i++){
		if(str[i]!=str[i-1]){
			if((i-s)%2!=0){
				isOk=false;
			}
			s=i;
		}
	}
	if((i-s)%2!=0){
		isOk=false;
	}
	if(isOk){
		cout<<"khoob";
	}
	else{
		cout<<"bad";
	}
	return 0;
}