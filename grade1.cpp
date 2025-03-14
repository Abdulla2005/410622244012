#include <iostream>
using namespace std;
int main(){
	int mark;
	cout<<"	Enter your mark: ";
	cin>>mark;
	if(mark>=90){
		cout<<"Grade A";
	}
	else if(mark>=80){
		cout<<"Grade B";
	}
	else if(mark>=70){
		cout<<"Grade C";
	}
	else{
		cout<<"Grade D";
	}
	return 0;
}
