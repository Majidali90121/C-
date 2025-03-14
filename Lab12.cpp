//lab 12
#include <cmath>
#include <iostream>
using namespace std;
int main(){
	//decleration of variable
	double a,b;
	//cout statement
	cout<<"Enter any number"<<endl;
	cin>>a;
	cout<<"Enter another number"<<endl;
	cin>>b;
	//sin function
	cout<<"sin function: "<<endl;
	cout<<sin(a)<<endl;
	//cos function
	cout<<"Cos function: "<<endl;
	cout<<cos(a)<<endl;
	//power of function
	double pow(double a,double b);
	cout<<"Power value: "<<endl
	cout<< pow(a,b)<<endl;
	//square root
	cout<<"Square root value: "<<endl
	cout<<sqrt(a)<<endl;
	//absolute of function
	cout<<"Absolute value: "<<endl;
	cout<<abs(a)<<endl;
	return 0;
}/*
#include <iostream>
using namespace std;
//function is written below
void greet(){
	cout<<"Hellow, Welcome c++ Function"<<endl;
}
int main(){
//function is store below
	greet();
	return 0;
}
#include <iostream>
using namespace std;
//function is written below
void even(int a){
 if(a % 2==0)
 	cout<<a<<" Function is even";	 
 else
 	cout<<a<<" Function is odd";
 
 }
int main(){
   //declear a variable
	int num;
	//cout statement and take user from input
	cout<<"Enter a number: "<<endl;
    cin>>num;
    //function is store below
    even(num);
	return 0;
 }*/
 #include <iostream>
 using namespace std;
 //function is written below 
 void grett(int a){
 	int fact=1;
 	if(a>0){	 
 	for(int i = 1 ; i <= a ; i++){
 	   	fact*=i;
	 }
	 cout<<fact;
}else if(a==0){
	cout<<"1"<<endl;
}else{
	cout<<"not exsist"<<endl;
}	 
	
 }
 int main(){
 //variable declear
 	int num;
 	//cout statement and take input from user
 	cout<<"Enter any number: ";
 	cin>>num;
 	//function is stored
 	grett(num);
 	return 0;
 }/*
 #include <iostream>
 using namespace std;
 //function is written below
 void add(int a,int b){
 	cout<<a+b<<endl;
 }
 void subtract(int a,int b){
 	cout<<a-b;
 }
 void multipl(double a,double b){
 	cout<<a*b;
 }
 void divide(double a,double b){
 	cout<<a/b;
 }
 int main(){
 	//decleration of variable
 	int num1,num2,s;
 	char oper;
 	//lopp for more operation perform
 do{
 	//take user from input
 	cout<<"Enter any two number: "<<endl;
	 cin>>num1>>num2;
	 cout<<"Enter an operator:\n+\t-\nx\t/ "<<endl;
	 cin>>oper;
	 //if statement for chosse of operator
	 if(oper=='+'){
	 	//function store
	 	add(num1,num2);
	 }else if(oper=='-'){
	 	subtract(num1,num2);
	 }else if(oper=='x'){
	 	multipl(num1,num2);
	 }else{
	 	divide(num1,num2);
	 }
	 cout<<"\nIf you want to perform more operation then press 1 otherwise press 2 to exsist: ";
	 cin>>s;
	 }while(s==1);
	 return 0;	
 }
*/
#include <iostream>
using namespace std;
void menu(){
	cout<<"Menu for resturant is given below and also press back number to select items:\n1) Tea = 10$\t \t \t2) cofee = 12$\n3) Haleem = 13$\t \t \t4) Chiken burger = 14$\n5) Zinger burger = 15$"<<endl;
}
void price(int total,int quantity){
	int taxes;
	taxes=total*0.2+total*quantity;
	cout<<taxes<<"$"<<endl;
	cout<<"Thankyou for visiting here! "<<endl;
} 


int main(){
	menu();
	int _quantity,item;
	cin>>item;
	switch(item){
		case 1:
			cout<<"How many cups due you want: ";
			cin>>_quantity;
			price(10,_quantity);
			break;
		case 2:
			cout<<"How many cups due you want: ";
			cin>>_quantity;
			price(12,_quantity);
			break;
		case 3:
			cout<<"How many Plates due you want: ";
			cin>>_quantity;
			price(13,_quantity);
			break;
		case 4:
			cout<<"How many Burger due you want: ";
			cin>>_quantity;
			price(14,_quantity);
			break;	
	    case 5:
			cout<<"How many Burger due you want: ";
			cin>>_quantity;
			price(15,_quantity);
			break;
	}
}/*
//adding two number
#include <iostream>
using namespace std;
float gett(int a,float b){
	return a+b;
}
int main(){
	int num1,num2;
	cout<<"Enter any two number: ";
	cin>>num1>>num2;
	gett(num1, num2);
	cout<<"The addition of two number: "<<gett(num1,num2)<<endl;
}*/
