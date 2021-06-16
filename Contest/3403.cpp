#include <iostream>
#include <iomanip>
using namespace std;
double max(double a,double b, double c,double d){
	double max=a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	if(d>max){
		max=d;
	}
	return max;
}
double min(double a,double b, double c,double d){
	double min=a;
	if(b<min){
		min=b;
	}
	if(c<min){
		min=c;
	}
	if(d<min){
		min=d;
	}
	return min;
}
int main(){
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<setprecision(6);
	cout<<std::fixed;
	cout<<"\nSum : "<<(a+b+c+d);
	cout<<"\nAverage : "<<((a+b+c+d)/4);
	cout<<"\nProduct : "<<(a*b*c*d);
	cout<<"\nMAX : "<<max(a,b,c,d);
	cout<<"\nMIN : "<<min(a,b,c,d);
	//getch();
	return 0;
}