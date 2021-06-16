#include <iostream>
using namespace std;
char upper(char c){
	char c2;
	if(c>=97 && c<=122){
		return c-32;
	}
	else{
		return c;
	}
}
char lower(char c){
	char c2;
	if(c>=65 && c<=90){
		return c+32;
	}
	else{
		return c;
	}
}
int main(){
	int n,i,j;
	string fn[11];
	cin>>n;
	for(i=0;i<=n;i++){
		getline(cin,fn[i]); 
		fn[i][0]=upper(fn[i][0]);
		j=1;
		while(j<=fn[i].length()){	
			if(fn[i][j]==' '){
				fn[i][j+1]=upper(fn[i][j+1]);
				j=j+2;
			}
			else{
				fn[i][j]=lower(fn[i][j]);
				j++;
			}
		}
	}
	for(i=1;i<=n;i++){
		cout<<fn[i]<<endl;
	}
}