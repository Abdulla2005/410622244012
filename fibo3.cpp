#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter no of series: ";
	cin>>n;
	if(n<1){
		cout<<"Please enter a positive integer";
	}
	int a=0;
	int b=1;
	int c;
	cout<<"Fibonacci series is: ";
	if(n>=1) cout<<a<<"";
	if(n>=2) cout<<b<<"";
	for(int i=2;i<n;i++){
		c=a+b;
		cout<<c<<"";
		a=b;
		b=c;
	}

	return 0;
}
