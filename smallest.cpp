#include <iostream>
using namespace std;
int main(){
	int num1;
	cout<<"	Enter first number: ";
	cin>>num1;
	int num2;
	cout<<"	Enter second number: ";
	cin>>num2;
	int num3;
	cout<<"	Enter third number: ";
	cin>>num3;
	if(num1<=num2&&num1<=num3){
		cout<<"First number is smallest";
	}
	else if(num2<=num1&&num2<=num3){
		cout<<"Second number is smallest";
	}
	else{
		cout<<"Third number is smallest";
	}
	return 0;
}
