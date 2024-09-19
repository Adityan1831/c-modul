// Write a C++ program to accpet worker information Worker_Name, No_Of_Hours_Worked,
//Pay_Rate and Salary. Write necessary functions to calculate and display the salary of Worker. (Use
//3Default values for Pay_Rate Rs. 500 per hours)
#include<iostream>
using namespace std;
class info{
	int hours;
	float sal;
	string a;
	public :
		void get(string n1,int h1){
		
		
		a = n1;
		hours=h1;
		cout<<"\nName of worker is ="<<a<<"\n"<<hours<<"\  hours he worked..";
}
	void display(){
		sal=hours*500;
		cout<<"\n salary of worker is ="<<sal;
	}
};
int main (){
	info obj;
	int hours;
	string a;
	cout<<"\n Enter worker name =";
	cin>>a;
	cout<<"\n Enter hours =";
	cin>>hours;
	obj.get(a,hours);
	obj.display();
	
}