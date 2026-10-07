#include<iostream>
using namespace std;
int main(){
	string customername;
	string model;
	int quantity;
	float price,Totalsales;
	cout <<"Enter Customer Name:"<<endl;
	cin>>customername;
	cout<<"Enter phone model:"<<endl;
	cin>>model;
	cout<<"Enter quantity purchased:"<<endl;
	cin>>quantity;
	cout<<"Enter Price:"<<endl;
	cin>>price;
	Totalsales=quantity*price;
	cout <<"SALES RECEIPT:"<<endl;
	cout<<"=================:"<<endl;
	cout<<"Customer Name:"<< customername<<endl;
	cout<<"Phone model:"<<model<<endl;
	cout<<"Quantity Purchased:"<<quantity<<endl;
	cout<<"==================:"<<endl;
	cout<<"TOTAL SALES:"<<Totalsales<<endl;
	cout<<"==================:"<<endl;
	
	
}