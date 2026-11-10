#include<iostream>
using namespace std;
int main(){
	string name;
	double unitsconsumed, RatePerUnit;
	double totalbill;
	double discount;
	double finalAmount; 
	cout<<"Enter Customer name:"<<endl;
	cin>>name;
	cout<<"Enter units consumed"<<endl;
	cin>>unitsconsumed;
	cout<<"Enter Rate per Unit"<<endl;
	cin>>RatePerUnit;
	
	totalbill= unitsconsumed * RatePerUnit;
	{
		if(unitsconsumed>100)
		{
			discount=totalbill*0.10;
		}
		else
		{
			discount=0;
		}
		
		finalAmount=totalbill-discount;
	}
	cout<<"===========WATER BILL========="<<endl;
	cout<<"Customer Name:"<<name<<endl;
	cout<<"Units Consumed:"<<unitsconsumed<<endl;
	cout<<"Rate Per Unit: Ksh"<<RatePerUnit<<endl;
	cout<<"Total Bill Before Discount: Ksh"<<totalbill<<endl;
	cout<<"Discount: Ksh"<<discount<<endl;
	cout<<"Final Amount Payable:Ksh"<<finalAmount<<endl;
	cout<<"==============================="<<endl;
	return 0;
	
}