#include<iostream>
using namespace std;
int main(){
	string studentname,testresults;
	float theorymarks,practicalmarks,averagescore;
	
	cout<<"Enter Student Name:"<<endl;
	cin>>studentname;
	cout<<"Enter Theory Test Marks:"<<endl;
	cin>>theorymarks;
	cout<<"Enter Practical Test Marks:"<<endl;
	cin>>practicalmarks;
	
	averagescore=(theorymarks+practicalmarks)/2;
	
	if(averagescore >=50){
		testresults ="Pass";
	}
	else{
		testresults ="Fail";
	}
	cout<<"Driving Test Result:"<<testresults<<endl;
	cout<<"Student Name:"<<studentname<<endl;
	cout<<"Theory Test Marks:"<<theorymarks<<endl;
	cout<<"Practical Test Marks:"<<practicalmarks<<endl;
	cout<<"Average Score:"<<averagescore<<endl;
}