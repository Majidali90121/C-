//lab 05
/*
#include <iostream>
using namespace std;
int main()
{
	//programe 01
	char d,c;
	int a,ruby;
	
	cout<<"_______________________________________________"<<endl;
	cout<<"|                  Salary Slip                |"<<endl;
	cout<<"|_____________________________________________|"<<endl;
   
   
    cout<<"|_____________________________________________|"<<endl;
	cout<<"|Enter the grade of Employe:  ";
	cin>>d;
	if(d=='A'){
		const int salary=50000;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|The salary of grade A is: "<<salary<<"         |"<<endl;
		cout<<"|_____________________________________________|"<<endl;
	}
	if(d=='B'){
		const int salary=30000;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|The salary of grade B is: "<<salary<<"         |"<<endl;
		cout<<"|_____________________________________________|"<<endl;
	}
	if(d=='C'){
		const int salary=20000;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|The salary of grade C is: "<<salary<<"         |"<<endl;
		cout<<"|_____________________________________________|"<<endl;
	}
	cout<<"|Enter the year of work experince of man: ";
	cin>>a;
	if(d=='A' && a>=10){
		double b,bonus,text,net_salary;
		const int salary=50000;
		b=salary/100*10;
		bonus=b+salary;
		text=salary/100*20;
		net_salary=bonus-text;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|Taxt : $"<<text<<endl;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|The bonus of employe will be : $"<<bonus<<endl;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|Net Salary : $"<<net_salary<<endl;
		cout<<"|_____________________________________________|"<<endl;
	}
	
	if(d=='A'&&a>=5 && a<=9){
		double l,r,text,t;
		const int salary=50000;
		l=salary/100*5;
		r=salary+l;
		text=r/100*20;
		t=r-text;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|Taxt: $"<<text<<endl;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|The bonus of employe will be: $"<<r<<endl;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|Net Salary: $"<<t<<endl;
		cout<<"|_____________________________________________|"<<endl;

	}
	
	if(d=='A'&& a<5){
		const int salary=50000;
		double text,net_salary;
        text=salary/100*20;
        net_salary=salary-text;
        cout<<"|_____________________________________________|"<<endl;
        cout<<"|Taxt: $"<<text<<endl;
        cout<<"|_____________________________________________|"<<endl;
		cout<<"|The employe have no bonus"<<endl;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|Net salary: $"<<net_salary<<endl;
	    cout<<"|_____________________________________________|"<<endl;
	}
if(d=='B' && a>=10 ){
		double b,bonus,text,net_salary,salary=30000;
		b=salary/100*10;
		bonus=b+salary;
		text=salary/100*10;
		net_salary=bonus-text;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|Taxt: $"<<text<<endl;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|The bonus of employe will be : $"<<bonus<<endl;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|Net salary: $"<<net_salary<<endl;
		cout<<"|_____________________________________________|"<<endl;
	}
		if(d=='B'&&a>=5 && a<=9){
		double l,bonus,text,net_salary;
		const int salary=30000;
		l=salary/100*5;
		bonus=salary+l;
		text=bonus/100*10;
		net_salary=bonus-text;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|Taxt: $"<<text<<endl;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|The bonus of employe will be: $"<<bonus<<endl;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|Net salary: $"<<net_salary<<endl;
		cout<<"|_____________________________________________|"<<endl;
	}
	
	if(d=='B'&& a<5){
		const int Salary=30000;
		double text,Net_salary;
		text=Salary/100*10;
		Net_salary=Salary-text;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|Taxt: $"<<text<<endl;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|The employe have no bonus: $"<<Salary<<endl;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|Net salary: $"<<Net_salary<<endl;
	}
	if(d=='C' && a>=10 ){
		double b,Net_salary;
		const int salary=20000;
		b=salary/100*10;
		Net_salary=b+salary;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|Not including Taxt"<<endl;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|The bonus of employe will be : $"<<Net_salary<<endl;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|Net Salary: $"<<Net_salary<<endl;
	}
	
	
	if(d=='C'&&a>=5 && a<=9){
		double l,Net_salary,bonus;
		const int salary=20000;
		bonus=salary/100*5;
		Net_salary=salary+bonus;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|Not including Taxt"<<endl;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|The bonus of employe will be: $"<<bonus<<endl;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|Net salary: $"<<Net_salary<<endl;
		cout<<"|_____________________________________________|"<<endl;
	}
	
	if(d=='C'&& a<5){
		const int Salary=20000;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|Not including taxt"<<endl;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|The employe have no bonus: $"<<Salary<<endl;
		cout<<"|_____________________________________________|"<<endl;
		cout<<"|Net salary: $"<<Salary<<endl;
		cout<<"|_____________________________________________|"<<endl;
	}    
	return 0;
	
}/*
#include <iostream>
using namespace std;
int main()
{
	//programe 02
	int a;
	cout<<"Enter number: "<<endl;
	cin>>a;
	
	if(a>0){
		cout<<"the number is positive: "<<a<<endl;
	}
	if(a<0){
		cout<<"The number is negative: "<<a<<endl;
	}
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	//programe 03
	int a;
	cout<<"Enter the integer: ";
	cin>>a;
	if (a % 2==0){
		cout<<"The number: "<<a<<" is even"<<endl;
	}
	if(a % 2 != 0) {
		cout<<"The number: "<<a<<" is not an even"<<endl;
	}
	return 0;
}*//*
#include <iostream>
using namespace std;
int main()
{
	//programe 04
	int a,b,c;
	cout<<"Enter First number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	cout<<"Enter third number: ";
	cin>>c;
	if(a>b && a>c){
		cout<<"The greatest number is: "<<a<<endl;
	}
	if(b>a && b>c){
		cout<<"The greatest number is: "<<b<<endl;
		
	}
	if(c>a && c>b){
		cout<<"The gratest number is: "<<c<<endl;
	}
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	//programe 05
	double a;
	cout<<"Enter total marks of student: ";
	cin>>a;
	if (a>=90){
		cout<<"Student have A+ grade with marks: "<<a<<endl;
	}
	if (a>=80 && a<=89){
		cout<<"Student have A grade  with marks: "<<a<<endl;
	}
	if (a>=70 && a<=79){
		cout<<"Student have B grade with marks: "<<a<<endl;
	}
	if (a>=60 && a<=69){
		cout<<"Student have C grade with marks: "<<a<<endl;	
		}
	if (a<60){
		cout<<"student is fail with marks: "<<a<<endl;
	}
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	//programe 06
	char a;
	cout<<"Enter the color of light (R:For red|G:for go|Y:for yellow): ";
	cin>>a;
	if (a == 'R'){
		
		cout<<"Stop"<<endl;
		
	}
	if (a == 'G'){
		cout<<"Go"<<endl;
		
	}
	if (a == 'Y'){
		cout<<"Slow down"<<endl;
		
	}
	
	return 0;
}
#include <iostream>
using namespace std;
int main(){
       //programe 07
	cout<<"_____________________________________________________"<<endl;
	cout<<"               Welcome to Banking app"<<endl;
	cout<<"_____________________________________________________"<<endl;
	int a,b,c;
	cout<<"Enter your account balance: "<<endl;
	cin>>a;
	cout<<"Enter your withdraw ammount: "<<endl;
	cin>>b;
	c=a-b;
	if(a>=b){
		cout<<"Then your remaning balance: $"<<c<<endl;
	}
	else{
		cout<<"you have insufficient balance. "<<endl;
	}
	double e,f;
	cout<<"Enter the employe salary: $"<<endl;
	cin>>e;
	cout<<"Enter work experince of man: "<<endl;
	cin>>f;
	
	if(e>=20000 && f>5 || e==25000 ){
		cout<<"The employe have egligeble for loan. "<<endl;
		
	}else{
		cout<<"the employe have not egligeble for loan. "<<endl;
	}
	return 0;
}
