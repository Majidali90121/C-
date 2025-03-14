//lab 09
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    while(n>=1){
    	cout<<n<<endl;
    	n--;
	}
    
}
#include <iostream>
using namespace std;
int main(){
	int table,i;
	cout<<"Enter the table: ";
	cin>>table;
	cout<<"Enter number to end the table: ";
	cin>>i;
	while(i>=0){
		cout<<table<<" X"<<i<<" ="<<table*i<<endl;
		i--;
	}
	return 0;
}
#include <iostream>
using namespace std;
int main(){
	int i;
	cout<<"Enter any positive number: "<<endl;
	cin>>i;
	while(i<=0){
		cout<<"Invalid number is enter: try again"<<endl;
		cin>>i;
	}
	return 0;
}*/
/*
#include <iostream>
using namespace std;
int main(){
	int i=1;
	int a=0;
	while(i<=5){
		a+=i;
		i++;
	}
	cout<<"The sum of first 5 number natural number is: "<<a<<endl;
}/*
#include <iostream>
using namespace std;
int main(){
    int deposite,withdraw,checkbalance,total=1000,subtotal;
    string money,isneeded;
    
    cout<<"What you want to do deposite_money, check_balance, with_draw_money, write below: ";
    cin>>money;
    if(money=="depositemoney"){
    	cout<<"Enter the deposite money: ";
    	cin>>deposite;
    	cout<<"Your deposite money is this: "<<deposite<<" total money is: "<<deposite+total<<endl;
    	subtotal=deposite+withdraw;
	}
	if(money=="withdraw"){
		cout<<"Enter money that you with_draw: ";
		cin>>withdraw;
		if(withdraw<=1000){
			cout<<"Then your withdraw money is: "<<withdraw<<endl;
		}
		else{
			cout<<"Your money is insufficient!"<<endl;
		}
	}
	if(money=="checkbalance"){
		cout<<"your total balance is: "<<total<<endl;
	}
	cout<<"if you want to performe more operation then press +: ";
	cin>>isneeded;
	while(isneeded=="+"){
		cout<<"What you want to do deposite_money, check_balance, with_draw_money, write below: ";
    cin>>money;
    if(money=="depositemoney"){
    	cout<<"Enter the deposite money: ";
    	cin>>deposite;
    	cout<<"Your deposite money is this: "<<deposite<<" total money is: "<<deposite+total<<endl;
    	
	}
	subtotal=total+deposite;
	if(money=="withdraw"){
		cout<<"Enter money that you with_draw: ";
		cin>>withdraw;
		if(withdraw<=subtotal){
			cout<<"Then your withdraw money is: "<<withdraw<<endl;
		}
		else{
			cout<<"Your money is insufficient!"<<endl;
		}
	}
	if(money=="checkbalance"){
		cout<<"IF you want to deposite then write deposite otherwise write withdraw: ";
		cin>>money;
		if(money=="depositemoney"){
		cout<<"Your reamaning balance is given below: "<<total+deposite<<endl;
}
subtotal=total+deposite;
if(money=="withdraw"){
	cout<<"Your reamaning balance is: "<<subtotal-withdraw<<endl;
}
	}
	cout<<"if you want to performe more operation then press + otherwise press -: ";
	cin>>isneeded;
	}
	cout<<"Thankyou for using banking app! "<<endl;
	return 0;
}

/*#include <iostream>
using namespace std;                      
int main(){
	string username,password;
	
	do{
		cout<<"Enter your username: ";
		cin>>username;
		cout<<"Enter your password: ";
		cin>>password;
		if(password!="12345"){
			cout<<"Invalid name enter"<<endl;
		}
	}while(password!="12345");
	cout<<"congratulation"<<endl;
	return 0;
}*/
#include <iostream>
using namespace std;
int main(){
	int menu,submenu,type,n,isneeded;
	do{
		cout<<"Enter a catagory of eating press \n1 for luch\n2 for breakfast\n3 for dinner: "<<endl;
		cout<<"Enter a catagory that you want: ";
		cin>>type;
		
		if(type==1){
			cout<<"Menu for luch is given below\npress 1 for chicken karahi(1050 per kg)\npress 2 for Mutton Karahi(1800 per kg)\npress 3 for Egg fried rice(450 per kg)\npress 4 for BBQ(1050 per kg)"<<endl;
			cout<<"Please entry a catagory that you want to eat: ";
			cin>>menu;
			cout<<"Enter aquantity that you want";
			cin>>n;
		switch (menu){
			case 1:
				cout<<"The price of"<<n<<" kg Chicken karahi is: "<<n*1050<<endl;
				break;
			case 2:
				cout<<"The price of "<<n<<" kg of mutton karahi is: "<<n*1800<<endl;
				break;
			case 3:
				cout<<"The price of "<<n<<" plate of Egg Fried rice is: "<<n*450<<endl;
				break;
			case 4:
			    cout<<"The price of "<<n<<" dozen of BBQ is: "<<n*1050<<endl;
			    break;
						}
		}
		if(type==2){
			cout<<"Menu for breakfast given below\npress 1 for Anda Paratha(40 per plate)\npress 2 for Nan Channy(60 per nan channy plate)\npress 3 for Siri Paye(1050 per kg)\npress 4 for Tea(15 per cup)"<<endl;
			cout<<"Press entry a catagory that you want to eat: ";
			cin>>menu;
			cout<<"Enter a quantity that you want: ";
			cin>>n;
			switch(menu){
				case 1:
					cout<<"The price of anda Paratha is: "<<n*40<<endl;
					break;
				case 2:
				    cout<<"The price of nan Chanay: "<<n*60<<endl;
					break;
				case 3:
				    cout<<"The price of Siri Paye: "<<n*150<<endl;
					break;
				case 4:
				    cout<<"The price of Tea is: "<<n*15<<endl;
					break;	
			}
		}
		if(type==3){
			cout<<"Menu for Dinner is given below\npress 1 for Chicken Karahi(1050 per kg)\npress 2 for Mutton Karahi(1800 per kg)\npress 3 for Egg Fried Rice(450 per plate)\npress 4 for BBQ(1050 per kg)\npress 5 for Saji(800 per kg)"<<endl;
			cout<<"Press entry a catagory that you want to eat: ";
			cin>>menu;
			cout<<"Enter a quantity that you want to eat: ";
			cin>>n;
			switch(menu){
				case 1:
					cout<<"The price of Chicken Karahi is: "<<n*1050<<endl;
					break;
				case 2:
					cout<<"The price of Mutton Karahi is: "<<n*1800<<endl;
					break;
				case 3:
					cout<<"The price of Egg Fried rice is: "<<n*450<<endl;
					break;
				case 4:
					cout<<"The price of BBQ is: "<<n*1050<<endl;
					break;
				case 5:
					cout<<"The price of Sagi is: "<<n*800<<endl;
					break;
							}
		}
		
		cout<<"if you want to enjoy more then press 1 otherwise press 2: ";
		cin>>isneeded;
	}while(isneeded==1);
	    
		cout<<"Thank you visit here!"<<endl;
		return 0;
}
