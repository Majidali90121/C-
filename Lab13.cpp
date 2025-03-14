//lab 13
#include <iostream>
using namespace std;
int main(){
	//task 1
	int num=10;
	int* ptr=&num;
	cout<<"The value at ptr: "<<ptr<<endl;
	cout<<"The value at *ptr: "<<*ptr<<endl;
	return 0;
	//2 task
	int num=10;
	int* ptr=&num;
	cout<<"The value at ptr: "<<ptr<<endl;
	cout<<"The value at *ptr: "<<*ptr<<endl;
	*ptr=20;
	cout<<"The modify value is: "<<*ptr<<endl;
}
//task 03
*/
#include <iostream>
using namespace std;
int main(){
	int arr[3]={10,20,30};
	int* ptr=arr;
	for(int i=0;i<3;i++){
		cout<<"Value: "<<*ptr<<" at adress: "<<ptr<<endl;
		*ptr++;
	}
	return 0;
}/*
//task 04
#include <iostream>
using namespace std;
int main(){
	int*ptr=NULL;
	if(ptr==NULL){
		cout<<"Error"<<endl;
	}
	return 0;
}*/

/*#include <iostream>
using namespace std;
void myfavfunction(int* i,int* s){
	int temp=*i;
	*i=*s;
	*s=temp;
}
int main(){
	int a=10,b=9;
	cout<<"The value before: "<<a<<" and "<<b<<endl;
	myfavfunction(&a,&b);
	cout<<"The value after: "<<a<<" and "<<b<<endl;
	return 0;
}*/

