// Swapping Two Numbers Without Using Third Variable

#include <iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Enter 1st Number: "<<endl;
	cin>>a;
	cout<<"Enter 2nd Number: "<<endl;
	cin>>b;
	cout<<"Before Swap: \n"<<a<<" "<<b;

	// Using XOR Operator
	a=a^b;
	b=a^b;
	a=a^b;

	cout<<"After Swap: "<<a<<" "<<b;
}
