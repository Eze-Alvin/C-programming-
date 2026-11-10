#include<iostream>
using namespace std;
int main(){
	string name;
	double basicsalary,overtimehours,rateperhour,overtimepay,netsalary;
	
	cout<<"Enter employee name:"<<endl;
	cin>>name;
	cout<<"Enter basic salary:"<<endl;
	cin>>basicsalary;
	cout<<"Enter overtime hours:"<<endl;
	cin>>overtimehours;
	cout<<"Enter rate per hour:"<<endl;
	cin>>rateperhour;
	
	overtimepay=overtimehours*rateperhour;
	netsalary=basicsalary+ overtimepay;
	
	cout<<"==========EMPLOYEE PAYSLIP=======:"<<endl;
	cout<<"Employee name:"<<name<<endl;
	cout<<"Basic Salary:"<<basicsalary<<endl;
	cout<<"Overtime Pay:"<<overtimepay<<endl;
	cout<<"Net Salary:"<<netsalary<<endl;
	return 0;
	
}