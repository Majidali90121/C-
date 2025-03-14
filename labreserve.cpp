#include <iostream>
using namespace std;
void gett(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main(){
	int a,b;
	cout<<"Enter any two number: ";
	cin>>a>>b;
	cout<<"The value of a and b after swaped: "<<a<<" "<<b<<endl;
	gett(a,b);
	cout<<"The value of a and b is before swap: "<<a<<" "<<b<<endl;
}
/*#include <iostream>
using namespace std;
int greet(int n){
	if(n==1)
	return  0;
	return n * greet(n - 1);
	}
	int main(){
		int n;
		cout<<"Enter the value of integers: ";
		cin>>n;
        cout<<"The sum of integers is: "<<greet(n);	
}

