//lab 08
/*#include <iostream>
using namespace std;
int main(){

	char Area;
	cout<<"Enter the area (R for rectangle and T for triangle and C for circle) : ";
	cin>>Area;
	switch (Area){
		case 'R':
			cout<<"The area of Rectangle will be: Lenght X Width";
			break;
		case 'T':
		cout<<"The are of Triangle will be : 1/2 X (Lenght X Width)";
		break;
		case 'C':
		cout<<"The area of Circle will be : PI X R^2";
		break;
		default:
		cout<<"Invalid user";
	    break;	 	
	}
	return 0;
}/*
#include <iostream>
using namespace std;
int main(){
//task 1
	char Catagory;
	int  Price,Total_price,Discount;
	cout<<"Enter the catagory of item (E for Electronic : C for Clothing : G for Glocery): ";
	cin>>Catagory;
	switch(Catagory){
		case 'E':
			
			cout<<"You can perchase the Electronic: ";
			char Electronics;
			cout<<"Enter the catagory of electronics (L for laptop: S for smart phone: H for head phone): ";cin>>Electronics;
			cout<<"Enter the prices of Electronic catagory: ";
			cin>>Price;
			
			switch(Electronics){
			case 'L':
				Total_price=Price*20/100;
				Discount=Price-Total_price;
			cout<<"The price of laptop with discount is: "<<Discount<<endl;
			break;	
			case 'S':
				Total_price=Price*20/100;
				Discount=Price-Total_price;
			cout<<"The price of smart phone with discount is: "<<Discount<<endl;
			break;
			case 'H':
				Total_price=Price*10/100;
				Discount=Price-Total_price;
			cout<<"The price of Head phone with discount is: "<<Discount<<endl;
			    break;				
			    default:
			    	cout<<"Invalid name";
	}
	break;
	case 'C':
		cout<<"You can perchase the Clothing: ";
			char Clothing;
			cout<<"Enter the catagory of Clothing (J for Jacket: T for T-shirt: N for Jeans): ";cin>>Clothing;
			cout<<"Enter the prices of Electronic catagory";
			cin>>Price;
			switch(Clothing)
			{
			case 'J':
				Total_price=Price*10/100;
				Discount=Price-Total_price;
			cout<<"The price of Jacket with discount is: "<<Discount<<endl;
			break;	
			case 'T':
			cout<<"The price of T-shirt with discount is: "<<Price<<endl;
			break;
			case 'N':
			cout<<"The price of Jeans with discount is: "<<Price<<endl;
			    break;				
			    default:
			    	cout<<"Invalid name";
	}
	break;
		case 'G':
			cout<<"You can perchase the Electronic: ";
			char Groceries;
			cout<<"Enter the catagory of electronics (M for Milk: B for Bread: E for Egg): ";cin>>Groceries;
			cout<<"Enter the prices of Electronic catagory";
			cin>>Price;
		
			switch(Groceries){
			
			case 'M':
			cout<<"The price of Milk with discount is: "<<Price<<endl;
			break;	
			case 'B':
			cout<<"The price of Bread with discount is: "<<Price<<endl;
			break;
			case 'E':
			cout<<"The price of 1 dozen Egg with discount is: "<<Price<<endl;
			    break;				
			    default:
			    	cout<<"Invalid name";
	}
		break;	
}
return 0;
}*/
/*#include <iostream>
using namespace std;
int main(){
//task 02
	double Total_currency,USD,Europeian,PKR,Amount;
	char Currency;
	cout<<"Enter amount that you can enter: ";
	cin>>Amount;
	cout<<"Enter the currency you can exchange:(U for U-S-D: E for European: P for PKR: I for indian)";
	cin>>Currency;
	switch(Currency){
		case 'E':
			Total_currency=Amount*1.09;
		    cout<<"The currency of U-S-D in euro: "<<Total_currency;
			break;
		case 'P':
			Total_currency=Amount*280;
			cout<<"The currency of  U-S-D in Pakistan: "<<Total_currency;
			break;
		case 'I':
			Total_currency=Amount*100;
			cout<<"The currency of U-S-D in Indian : "<<Total_currency;
			break ;
		default:
			cout<<"Invalid Name of Country";
			break;
	}
	return 0;
}/*
#include <iostream>
using namespace std;
int main(){
	char op;
	int a,b;
	cout<<"Enter an operator due you want to perform: ";
	cin>>op;
	cout<<"Enter any two number: ";
	cin>>a>>b;
	switch(op){
		case '+':
			cout<<a<<"+"<<b<<"="<<a+b<<endl;
			break;
			case '-':
			cout<<a<<"-"<<b<<"="<<a-b<<endl;
			break;
			case '*':
			cout<<a<<"*"<<b<<"="<<a*b<<endl;
			break;
			case '+':
			cout<<a<<"/"<<b<<"="<<a/b<<endl;
			break;
	}
#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter 1 to 7 any between number: ";
	cin>>a;
	swicth(a){
		case 1:
			cout<<"Day is Monday"<<endl;
			break;
		case 2:
			cout<<"Day is Tuesday"<<endl;
			break;
		case 1:
			cout<<"Day is Wednesday"<<endl;
			break;
		case 1:
			cout<<"Day is Thursday"<<endl;
			break;
		case 1:
			cout<<"Day is Friday"<<endl;
			break;
		case 1:
			cout<<"Day is Saturday"<<endl;
			break;
		case 1:
			cout<<"Day is Sunday"<<endl;
			break;			
	}
}*/
