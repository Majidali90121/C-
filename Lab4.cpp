//lab 04
/*#include <iostream>
using namespace std;
int main()
{
    //programe 01
	int x,y;
	cout<<"Enter a first number: ";
	cin>>x;
	cout<<"Enter a second number: ";
	cin>>y;
	(x % 2 == 0)? cout<<"The number "<<x<<" is an Even"<<endl: cout<<"The number "<<x<<" is odd"<<endl;
	(y % 2 == 0)? cout<<"The number "<<y<<" is an Even"<<endl: cout<<"The number "<<y<<" is odd";
	return 0;
}*/
/*
#include <iostream>
using namespace std;
int main()
{
	//programe 02
	int a,b,c;
	cout<<"Enter age of child: ";
	cin>>a;
	cout<<"Enter age of teenager: ";
	cin>>b;
	cout<<"Enter age of adult: ";
	cin>>c;
	(a<13)? cout<<"A "<<a<<" falls under the age of child\n": cout<<"Then not a child"<<endl;
	(b>=13 && b<=19)? cout<<"A "<<b<<" fall under the age of teenager"<<endl: cout<<"Then not a teenager"<<endl;
	(c>=20)? cout<<"A "<<c<<" falls under the age of adult"<<endl: cout<<"Then not a adult"<<endl;
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	//programe 3
	int balance;
	bool a;

	cout<<"________________________________________"<<endl;
	cout<<"           banking app"<<endl;
	cout<<"Enter your account balance: $";
	cin>>balance;
	cout<<"Are you loyal press 1 for true and 0 for false: ";
	cin>>a;
	(balance<100)? cout<<"You have low balance"<<endl:(balance>100 && balance<=500)? cout<<"your balance is considerable"<<endl:(balance>500)? cout<<"your account balance is premium"<<endl:cout<<" ";	
	(balance>=200 && a )? cout<<"you have egligeble for special offer"<<endl:cout<<"you are not egligeble for that offer"<<endl;
	cout<<"________________________________________"<<endl;
	cout<<"      thanku for using banking app"<<endl;
	
	return 0;
}
