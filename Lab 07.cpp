//lab 07
#include <iostream>
using namespace std;
int main()
{
//task 1
	int a,b;
	cout<<"Enter the number to check it is positive or negative: ";
	cin>>a;
	if(a>0){
		cout<<"the number: "<<a<<" is positive "<<endl;
	}else if(a==0)
	{
		cout<<"The number: "<<a<<" is zero "<<endl;
	}else{
		cout<<"The number: "<<a<<" is negative "<<endl;
	}
	//task 2
	cout<<"Enter the today temperature in: ";
	cin>>b;
	if(b>=40){
		cout<<"It advice the user to stay in door if:  "<<b<<"C"<<endl;
	}
	else if(b>=30 && b<=39){
		cout<<"The user advice to drink plenty of water: "<<b<<"C"<<endl;
	}
		else if(b>=20 && b<=29){
			cout<<"The user advice to weather is suitable for out door: "<<b<<"C"<<endl;
		}
		else {
			cout<<"The user advice to wearing clothes to stay confartable in color weateher if: "<<b<<endl;
		}
		return 0;
	}


#include <iostream>
#include <string>
using namespace std;
int main(){
//task 03
   	 string a;
     string b;
	 cout<<"Usre Name (String): ";
	 cin>>a;
	 cout<<"Password (String): ";
	 cin>>b;
	 if(a =="admin" && b =="12345"){
	 	cout<<"Acsses is Granted";
	 }else if(a=="admin"){
	 	cout<<"Wrong password ";
	 }else{
	 	cout<<"User Not Found";
	 }
	 return 0;
}

#include <iostream>
using namespace std;
int main(){
       double mark1,total_marks,mark2,mark3,Obtaine_marks,Percentage;
       char grade1,grade2,grade3;
	   total_marks=300; 	
       cout<<"The total marks is: "<<total_marks<<endl;
       cout<<"PF : ";
       cin>>mark1;
       cout<<"ICT : ";
       cin>>mark2;
       cout<<"Urdu : ";
       cin>>mark3;
       cout<<"Enter the grade of Pf: ";
       cin>>grade1;
       cout<<"Enter the grade of ICT: ";
       cin>>grade1;
       cout<<"Enter the grade of Urdu: ";
       cin>>grade1;
       Obtaine_marks=mark1+mark2+mark3;
       cout<<"The obtaine marks of student: "<<Obtaine_marks<<endl;
       Percentage=Obtaine_marks/total_marks*100;
       if(Obtaine_marks>=270){
       	cout<<"Student have grade A. and percentage"<<Percentage<<endl;
       	cout<<"The student egligeble for merit scholarship"<<endl;
	   }
	   else if(Obtaine_marks<270 && Obtaine_marks>=240){
	   	cout<<"Student have grade B. and percentage "<<Percentage<<endl;
	   	cout<<"studet is egligeble for regular scolarship"<<endl;
	   }
	   else if(Obtaine_marks<240 && Obtaine_marks>=210){
	    cout<<"student have grade C.and percentage "<<Percentage<<endl;
	   }
	   else if(Obtaine_marks<210 && Obtaine_marks>=180){
	   	cout<<"The student have grade D. and percentage "<<Percentage<<endl;
	   }
	   else if(Obtaine_marks<180){
	   	cout<<"The Student have grade F. and percentage "<<Percentage<<endl;
	   }
	     if(grade1!='A' && grade2!='B' && grade3!='C'){
	    cout<<"_____________________________"<<endl;
	   	cout<<"|Student is fail            |"<<endl;
	   	cout<<"_____________________________"<<endl;
	   }
       
	   return 0;
}/*
#include <iostream>
using namespace std;
int main(){
	//programe 08
	int age,income;
	cout<<"Enter the age of person : ";
	cin>>age;
	cout <<"Enter your income : $";
	cin>>income;
	if(age<18){
		cout<<"You are not egligeble for loan because you are under "<<age<<" age"<<endl;
		if(income>=30000){
			cout<<"your income meet egligeble charecteria but your age under "<<age<<" is not met the egligeble charcteria"<<endl;
		}
	}
	else if(age>=18){
		cout<<"your age is met the egligeble charcteria"<<endl;
		if(income<30000){
	                    cout<<"your income is not met the eglifeble charecteria"<<endl;
		}		else if(income>=30000 && age>=18){
			cout<<"Congratulation you met he egligeble characteria of loan "<<endl;
			
	}
}
		return 0;
}


#include <iostream>
using namespace std;
int main()
{
	//programe 09
	string username,password;
	cout<<"Enter the user name: ";
	cin>>username;
	cout<<"Enter the password to login: ";
	cin>>password;
	if(username=="Admin" && password=="password123"){
		cout<<"Authentication successfully!"<<endl;
		if(username=="Admin"){
			cout<<"Full Access"<<endl;
		}
	}
	else if(username=="Guest" && password=="password123"){
		cout<<"Authentication successfully!"<<endl;
		if(username=="Guest"){
		
		cout<<"Limited Access";
	}
	}
	else{
		cout<<"Authentication Decline!"<<endl;
		cout<<"Not Access";
	}
	return 0;
}*/


