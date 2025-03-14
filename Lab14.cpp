//lab 14
//task 01
/*
#include <iostream>
using namespace std;
struct student{
	string first_name;
	string last_name;
	int roll_number;
	int marks;
	void diplayfunction(student student){
		cout<<"First name: "<<student.first_name<<endl;
		cout<<"Last name: "<<student.last_name<<endl;
		cout<<"Roll number: "<<student.roll_number<<endl;
		cout<<"Marks: "<<student.marks<<endl;
	}
};
int main(){
	student s1;
	s1.first_name="Abdul Majid";
	s1.last_name="Ali";
	s1.roll_number=22;
	s1.marks=1100;
	s1.diplayfunction(s1);
	return 0;
*/
//task 02
/*#include <iostream>
using namespace std;
struct student{
	string first_name;
	string last_name;
	int roll_number;
	int marks;
	int total_marks;
	int n;
	void diplayfunction(student student){
		cout<<"First name: "<<student.first_name<<endl;
		cout<<"Last name: "<<student.last_name<<endl;
		cout<<"Roll number: "<<student.roll_number<<endl;
		cout<<"Marks: "<<student.marks<<" / "<<student.total_marks<<endl;
	}
};
int main(){
	student s1;
    student arr[s1.n];
    cout<<"Enter the number to  how many display the result of student: ";
    cin>>s1.n;
	cout<<"Enter your first name: ";
    cin>>s1.first_name;
    cout<<"Enter your last name: ";
	cin>>s1.last_name;
	cout<<"Enter your roll number: ";
	cin>>s1.roll_number;
	cout<<"Enter the marks: ";
	cin>>s1.marks;
	cout<<"Enter the total marks: ";
	cin>>s1.total_marks;
	s1.diplayfunction(s1);
	for(int i=0;i<s1.n-1;i++){
	cout<<"Enter your first name: ";
    cin>>arr[i].first_name;
    cout<<"Enter your last name: ";
	cin>>arr[i].last_name;
	cout<<"Enter your roll number: ";
	cin>>arr[i].roll_number;
	cout<<"Enter the marks: ";
	cin>>arr[i].marks;
	cout<<"Enter the total marks: ";
	cin>>arr[i].total_marks;
	arr[i].diplayfunction(arr[i]);
	}
	return 0;
}
//task 0
/*#include <iostream>
using namespace std;
struct student{
	string first_name;
	string last_name;
	int roll_number;
	int marks;
	int total_marks;
	void displayfunction(student *ptr){
		cout<<"First name: "<<ptr->first_name<<endl;
		cout<<"Last name: "<<ptr->last_name<<endl;
		cout<<"Roll number: "<<ptr->roll_number<<endl;
		cout<<"Marks: "<<ptr->marks<<" / "<<ptr->total_marks<<endl;
	}	
};
int main(){
	student s1;
	s1.first_name="Majid";
	s1.last_name="Ali";
	s1.roll_number=22;
	s1.marks=200;
	s1.total_marks=200;
	s1.displayfunction(&s1);
}*/
