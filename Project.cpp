#include <iostream>
#include <string>
#include <windows.h>
#include <iomanip>
using namespace std;
//use struct to store variable
struct resturnat{
	int choice;
	float price;
	string item;
};
struct id{
	string id;
	string phone;
	string location;
	string payment;
};
//use function for Lunch
void Lunch(int wish,float discount,float price){
	price=0;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	//using array to store data
        resturnat arr[15]={{1,1,"Biryani"},{2,5,"Chicken Karai"},
		                  {3,2,"Nihari"},{4,2,"Daal Chawal"},
						  {5,3,"Paye"},{6,4,"Chapali Kabab"},
						  {7,2,"Paratha roll"},{8,3,"Chana Masala"},
						  {9,3,"Chicken paratha roll"},{10,4,"Kabli Palow"},
						  {11,5,"Simple Plaoo"},{12,2,"Chicken Palow"},{13,5,"Malaie Boti"},
						  {14,4,"kachori"},{15,6,"Lasi"}
						  };
        id personalinform;
        int  needed;
        do{
		//using loop print menu
    for(int i=0;i<15;i++){
        cout<<setw(40)<<setfill(' ')<<"|"<<arr[i].choice<<" "<<arr[i].item<<" $"<<arr[i].price<<endl;
    }
    cout<<setw(100)<<setfill('=')<<" "<<endl;
    cout<<"Press 1 to 15 number to select the item: ";
    cin>>wish;
    while(wish!=1 && wish!=2 && wish!=3 && wish!=4 && wish!=5 && wish!=6 && wish!=7 && wish!=8 && wish!=9 && wish!=10 && wish!=11 && wish!=12 && wish!=13 && wish!=14 && wish!=15){
    	SetConsoleTextAttribute(hConsole,6);
		cout<<"Invalid number enter! Enter number agian: ";
    	cin>>wish;
	}
	SetConsoleTextAttribute(hConsole,14);
	for(int i=0;i<15;i++){
    if(wish==arr[i].choice){
    int Quantity;
        cout<<"You chose: "<<arr[i].item<<" "<<" Price = $"<<arr[i].price<<endl;
        cout<<"How much quantity did you want: ";
    cin>>Quantity;
        price+=arr[i].price*Quantity;	
    }
}
    //using loop for choice
    cout<<"If buy more item press 1 other wise press 2: ";
    cin>>needed;
}while(needed==1);
cout<<"Enter your phone number: ";
    cin>>personalinform.phone;
    cout<<"Enter your location: ";
    cin>>personalinform.location;
    cout<<"Enter your Id: ";
    cin>>personalinform.id;
    cout<<"Pay Ment Through DEPT/VISA: ";
    cin>>personalinform.payment;
    while(personalinform.payment!="DEPT" && personalinform.payment!="VISA" && personalinform.payment!="NOT" ){
    	SetConsoleTextAttribute(hConsole,6);
    	cout<<"Then payment is not paid pay agin and press NOT to pay in easy paisa: ";
    	cin>>personalinform.payment;
	}
	SetConsoleTextAttribute(hConsole,14);
	if(personalinform.payment=="NOT"){
		cout<<"Enter the number for payment: ";
		cin>>personalinform.payment;
	}
SetConsoleTextAttribute(hConsole,8);
 for(int i=0;i<15;i++){
    if(wish==arr[i].choice){
    cout<<setw(100)<<setfill('=')<<endl;
    cout<<setw(60)<<setfill(' ')<<"Invoice is given below!"<<endl;
        cout<<" Price of selected items is = $"<<price<<endl;
        
    }
}
    cout<<"Your Phone is: "<<personalinform.phone<<endl;
    cout<<"Your Location is: "<<personalinform.location<<endl;
    cout<<"Your Id is: "<<personalinform.phone<<endl;
    cout<<"With 10% discount "<<endl;
    cout<<"Order is succesfully placed!"<<endl;
    //use width and fill property
    cout<<setw(100)<<setfill('=')<<" "<<endl;
	cout<<setw(100)<<setfill('=')<<" "<<endl;

	//discount
discount=price-price*0.1;
cout<<"Total price with discount will be: $"<<discount<<endl;
cout<<"Payment is done!"<<endl;
}
///use function for breakfast
void breakfast(int wish,float price=0,int discount=0){
	//using array to store data
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		    resturnat arr[15]={{1,2,"Halwa puri"},{2,3,"Aloo Paratha"},
			                   {3,8,"Plian Paratha with chai"},{4,3,"Naan and Channa"},
			                   {5,6,"Omelete paratha"},{6,9,"Nihari"},
			                   {7,7,"Siri Paye"},{8,10,"Daal Rooti"},
							   {9,3,"Toss and Bread"},{10,1.2,"Chai"},
							   {11,2,"Lasi"},{12,3,"Mango juice"},{13,4,"Orange juice"},
							   {14,4,"Sheer Korma"},{15,2,"Cofee"}
							    };
    int needed;id personalinform;
    //use loop for user choice
    do{
	//using for loop for print items
    for(int i=0;i<15;i++){
        cout<<setw(40)<<setfill(' ')<<"|"<<arr[i].choice<<" "<<arr[i].item<<" $"<<arr[i].price<<endl;
    }
    cout<<setw(100)<<setfill('=')<<" "<<endl;
    cout<<"Press 1 to 15 number to select the item: ";
    cin>>wish;
    while(wish!=1 && wish!=2 && wish!=3 && wish!=4 && wish!=5 && wish!=6 && wish!=7 && wish!=8 && wish!=9 && wish!=10 && wish!=11 && wish!=12 && wish!=13 && wish!=14 && wish!=15){
    	SetConsoleTextAttribute(hConsole,6);
		cout<<"Invalid number enter! Enter number agian: ";
    	cin>>wish;
	}
	SetConsoleTextAttribute(hConsole,9);
    //using for loop user choice
	for(int i=0;i<15;i++){
    if(wish==arr[i].choice){
    int Quantity;
        cout<<"You chose: "<<arr[i].item<<" "<<" Price = $"<<arr[i].price<<endl;
        cout<<"How much quantity did you want: ";
    cin>>Quantity;
        price+=arr[i].price*Quantity;
    }
}
//using width property
cout<<setw(100)<<setfill('=')<<" "<<endl;
	cout<<setw(100)<<setfill('=')<<" "<<endl;
 cout<<"If you buy more item pree 1 other wise press 2: ";
 cin>>needed;
}while(needed==1);
cout<<"Enter your phone number: ";
    cin>>personalinform.phone;
    cout<<"Enter your location: ";
    cin>>personalinform.location;
    cout<<"Enter your Id: ";
    cin>>personalinform.id;
    cout<<"Pay Ment Through DEPT/VISA: ";
    cin>>personalinform.payment;
    while(personalinform.payment!="DEPT" && personalinform.payment!="VISA" && personalinform.payment!="NOT" ){
    	SetConsoleTextAttribute(hConsole,6);
    	cout<<"Then payment is not paid pay agin and press NOT to pay in easy paisa: ";
    	cin>>personalinform.payment;
	}
SetConsoleTextAttribute(hConsole,9);
	if(personalinform.payment=="NOT"){
		cout<<"Enter the number for payment: ";
		cin>>personalinform.payment;
	}
SetConsoleTextAttribute(hConsole,8);
 for(int i=0;i<15;i++){
    if(wish==arr[i].choice){
    cout<<setw(100)<<setfill('=')<<endl;
    cout<<setw(60)<<setfill(' ')<<"Invoice is given below!"<<endl;
        cout<<"The Price of selected item is = $"<<price<<endl;       
    }
}
    cout<<"Your Phone is: "<<personalinform.phone<<endl;
    cout<<"Your Location is: "<<personalinform.location<<endl;
    cout<<"Your Id is: "<<personalinform.phone<<endl;
    cout<<"With 10% discount "<<endl;
    cout<<"Order is successfully placed"<<endl;
    //use width and fill propert
    cout<<setw(100)<<setfill('=')<<" "<<endl;
	cout<<setw(100)<<setfill('=')<<" "<<endl;
    discount=price-price*0.1;
cout<<"Total price with discount will be: $"<<discount<<endl;
cout<<"Payment is done"<<endl;
}
//use function for dinner
void Dinner(int wish,float price=0,int discount=0){
	//using array to store data
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		    resturnat arr[15]={{1,1,"Simple Biryani"},{2,5,"Chicken Karai"},
		                       {3,2,"Nihari"},{4,2,"Daal rooti"},
						       {5,3,"Paye"},{6,4,"Chicken Karahi"},{7,5,"Mutton Korma"},
			                   {8,2,"Chicken Biryani"},{9,3,"Nihari"},
			                   {10,3,"BBQ"},{11,2,"Daal Chawal"},
			                   {12,3,"Chicken Handi"},{13,2,"Rogni naan with chana"},
							   {14,1.2,"Tea"},{15,2,"Salat"}};
							   
    int needed;id personalinform;
//use loop that depend on user to execute 
    do{
    	//using for loop to print the menu
    for(int i=0;i<15;i++){
        cout<<setw(40)<<setfill(' ')<<"|"<<arr[i].choice<<" "<<arr[i].item<<" $"<<arr[i].price<<endl;
    }
    cout<<setw(100)<<setfill('=')<<" "<<endl;
    cout<<"Press 1 to 15 number to select the item: ";
    cin>>wish;
    while(wish!=1 && wish!=2 && wish!=3 && wish!=4 && wish!=5 && wish!=6 && wish!=7 && wish!=8 && wish!=9 && wish!=10 && wish!=11 && wish!=12 && wish!=13 && wish!=14 && wish!=15){
    	SetConsoleTextAttribute(hConsole,6);
		cout<<"Invalid number enter! Enter number agian: ";
    	cin>>wish;
	}
	SetConsoleTextAttribute(hConsole,3);
    //use loop for user to chosse items
	for(int i=0;i<15;i++){
    if(wish==arr[i].choice){
    int Quantity;
        cout<<"You chose: "<<arr[i].item<<" "<<" Price = $"<<arr[i].price<<endl;
        cout<<"How much quantity did you want: ";
    cin>>Quantity;
        price+=arr[i].price*Quantity;   	
    }
}
//using width property
cout<<setw(100)<<setfill('=')<<" "<<endl;
//using width and fill properties
cout<<setw(100)<<setfill('=')<<" "<<endl;
//quantity that depend on user
cout<<setw(100)<<setfill('=')<<" "<<endl;
 cout<<"If you buy more item pree 1 other wise press 2: ";
 cin>>needed;	
}while(needed==1);
cout<<"Enter your phone number: ";
    cin>>personalinform.phone;
    cout<<"Enter your location: ";
    cin>>personalinform.location;
    cout<<"Enter your Id: ";
    cin>>personalinform.id;
    cout<<"Pay Ment Through DEPT/VISA: ";
    cin>>personalinform.payment;
    while(personalinform.payment!="DEPT" && personalinform.payment!="VISA" && personalinform.payment!="NOT" ){
    	SetConsoleTextAttribute(hConsole,6);
		cout<<"Then payment is not paid pay agin and press NOT to pay in easy paisa: ";
    	cin>>personalinform.payment;
	}
	SetConsoleTextAttribute(hConsole,3);
	if(personalinform.payment=="NOT"){
		cout<<"Enter the number for payment: ";
		cin>>personalinform.payment;
	}
SetConsoleTextAttribute(hConsole,8);
 for(int i=0;i<15;i++){
    if(wish==arr[i].choice){
    cout<<setw(100)<<setfill('=')<<endl;
    cout<<setw(60)<<setfill(' ')<<"Invoice is given below!"<<endl;
    cout<<"The Price of selected item is= $"<<price<<endl;
        
    }
}
    cout<<"Your Phone is: "<<personalinform.phone<<endl;
    cout<<"Your Location is: "<<personalinform.location<<endl;
    cout<<"Your Id is: "<<personalinform.phone<<endl;
    cout<<"With 10% discount "<<endl;
    cout<<"order is succesfully placed"<<endl;
    //use width and fill property
    cout<<setw(100)<<setfill('=')<<" "<<endl;
	cout<<setw(100)<<setfill('=')<<" "<<endl;
	discount=price-price*0.1;
cout<<"Total price with discount will be: $"<<discount<<endl;
	}
	//use functions with pointer in fast food
void Fastfood(int* wish,float* price=0,int discount=0){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	//arrays to store data
		    resturnat arr[15]={{1,4,"Pizza"},{2,5,"Burgger"},
		                      {3,2,"Fries"},{4,3,"Anda Chezz Burger"},
			                  {5,3,"BBQ"},{6,10,"Large offer(Buregr & Pizza)"},
			                  {7,3,"Banana Shake"},{8,2.6,"Drinks(cola)"},
							  {9,3,"Anda Burger"},{10,8,"Staberry Milk shake"},
							  {11,2,"Lasi"},{12,3,"Mango Shake"},{13,5,"Fruit Chart"},
							  {14,4,"Channa Chart"},{15,3,"Tika Boti"}
							    };
    int needed;id personalinform;
    //use loop that depend upon the user to order more
    do{
    	//using for loop to print the menu
    for(int i=0;i<15;i++){
        cout<<setw(40)<<setfill(' ')<<"|"<<arr[i].choice<<" "<<arr[i].item<<" $"<<arr[i].price<<endl;
    }
    cout<<setw(100)<<setfill('=')<<" "<<endl;
    cout<<"Press 1 to 15 number to select the item: ";
    cin>>*wish;
    while(*wish!=1 && *wish!=2 && *wish!=3 && *wish!=4 && *wish!=5 && *wish!=6 && *wish!=7 && *wish!=8 && *wish!=9 && *wish!=10 && *wish!=11 && *wish!=12 && *wish!=13 && *wish!=14 && *wish!=15){
    	SetConsoleTextAttribute(hConsole,6);
		cout<<"Invalid number enter! Enter number agian: ";
    	cin>>*wish;
	}
SetConsoleTextAttribute(hConsole,11);
    //use loop for user choice to chosse the items
	for(int i=0;i<15;i++){
    if(*wish==arr[i].choice){
    int Quantity;
        cout<<"You chose: "<<arr[i].item<<" "<<" Price = $"<<arr[i].price<<endl;
        cout<<"How much quantity did you want: ";
    cin>>Quantity;
        *price+=arr[i].price*Quantity;
        }
}

//using width property
cout<<setw(100)<<setfill('=')<<" "<<endl;
//using setw and fill property
cout<<setw(100)<<setfill('=')<<" "<<endl;
//quantity that depend upon user

cout<<setw(100)<<setfill('=')<<" "<<endl;
 cout<<"If you buy more item pree 1 other wise press 2: ";
 cin>>needed;	
}while(needed==1);
cout<<"Enter your phone number: ";
    cin>>personalinform.phone;
    
    cout<<"Enter your location: ";
    cin>>personalinform.location;
    cout<<"Enter your Id: ";
    cin>>personalinform.id;
    cout<<"Pay Ment Through DEPT/VISA: ";
    cin>>personalinform.payment;
    while(personalinform.payment!="DEPT" && personalinform.payment!="VISA" && personalinform.payment!="NOT" ){
    	SetConsoleTextAttribute(hConsole,6);
		cout<<"Then payment is not paid pay agin and press NOT to pay in easy paisa: ";
    	cin>>personalinform.payment;
	}
	SetConsoleTextAttribute(hConsole,11);
	if(personalinform.payment=="NOT"){
		cout<<"Enter the number for payment: ";
		cin>>personalinform.payment;
	}

SetConsoleTextAttribute(hConsole,8);
 for(int i=0;i<15;i++){
    if(*wish==arr[i].choice){
    cout<<setw(100)<<setfill('=')<<endl;
    cout<<setw(60)<<setfill(' ')<<"Invoice is given below!"<<endl;
        cout<<"The price of selected item is = $"<<*price<<endl;
        
    }
}
    cout<<"Your Phone is: "<<personalinform.phone<<endl;
    cout<<"Your Location is: "<<personalinform.location<<endl;
    cout<<"Your Id is: "<<personalinform.phone<<endl;
    cout<<"With 10% discount "<<endl;
    cout<<"Order is successfully placed"<<endl;
    //use width and fill property
    cout<<setw(100)<<setfill('=')<<" "<<endl;   
	cout<<setw(100)<<setfill('=')<<" "<<endl;
	discount=*price-*price*0.1;
cout<<"Total price with discount will be: $"<<discount<<endl;
cout<<"Payment is done!"<<endl;
	}
	
int main(){
	//using color property
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,2);
	//visual appealing
	cout<<setw(100)<<setfill('=')<<" "<<endl;
	SetConsoleTextAttribute(hConsole,6);
	cout<<"        |          |             |        "<<endl;
	cout<<"        |          |             |          "<<endl;
	cout<<"        |          |             |           "<<endl;
	cout<<"        |          |             |                           "<<endl;
	cout<<"        |          |   _______   |            _____  _____   ___ ___   ______   "<<endl;
	cout<<"        |          |  |_______|  |           |      |     | |   |   | |______|"<<endl;
	cout<<"        |    /\\    |  |          |           |      |     | |   |   | |       "<<endl;
	cout<<"        |___/  \\___|  |_______   |_________  |_____ |_____| |   |   | |______"<<endl;
	SetConsoleTextAttribute(hConsole,2);	
	cout<<setw(100)<<setfill('=')<<" "<<endl;
    //declaring of variable
	int choice;
    float price;
    float discount;
   
    //using color property
   
	
    SetConsoleTextAttribute(hConsole,4);
    cout<<"Press 1 for Break Fast menu 2 for Lunch 3 for Dinner and 4 fo junk foods: ";
    cin>>choice;
    while(choice!=1 && choice!= 2 && choice!=3 && choice!=4){
    	cout<<"Enter number again: ";
    	cin>>choice;
	}
	
    //using switch statement
    switch(choice){
    	case 1:
    		//funtion recall in case
    		SetConsoleTextAttribute(hConsole,13);
    		cout<<setw(100)<<setfill('=')<<" "<<endl;
    		cout<<"The item of break fast is given below: "<<endl;
    		cout<<setw(100)<<setfill('=')<<" "<<endl;
    		SetConsoleTextAttribute(hConsole,9);
    		breakfast(choice,price,discount);
    		cout<<setw(100)<<setfill('=')<<" "<<endl;
    	break;
    	case 2:
    		//function recall in cases
    		SetConsoleTextAttribute(hConsole,14);
    		cout<<setw(100)<<setfill('=')<<" "<<endl;
    		cout<<"The item of Lunch is given below: "<<endl;
    		cout<<setw(100)<<setfill('=')<<" "<<endl;
    		Lunch(choice,discount,price);
    	    cout<<setw(100)<<setfill('=')<<" "<<endl;
    		break;
    	case 3:
    		//function recall in cases
    		SetConsoleTextAttribute(hConsole,3);
    		cout<<setw(100)<<setfill('=')<<" "<<endl;
    		cout<<"The item of Dinner is given below: "<<endl;
    		cout<<setw(100)<<setfill('=')<<" "<<endl;
    		Dinner(choice,price,discount);
    		discount;
    		cout<<setw(100)<<setfill('=')<<" "<<endl;
    		break;
    	case 4:
    		//function recall in cases
    		SetConsoleTextAttribute(hConsole,11);
    		cout<<setw(100)<<setfill('=')<<" "<<endl;
    		cout<<"The item of fast food is given below: "<<endl;
    		cout<<setw(100)<<setfill('=')<<" "<<endl;
    		Fastfood(&choice,&price,discount);
    		cout<<setw(100)<<setfill('=')<<" "<<endl;
    		break;
    	default:
    		cout<<"Invalid operant is use!"<<endl;
    		break;
	}
	SetConsoleTextAttribute(hConsole,7);
	cout<<setw(100)<<setfill('=')<<" "<<endl;

	cout<<"Thanks for visit here!"<<endl;
	cout<<setw(100)<<setfill('=')<<" "<<endl;
	return 0;
	
}
