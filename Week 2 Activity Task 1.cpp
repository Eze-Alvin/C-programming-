#include<iostream>
using namespace std;
int main(){
	string studentname;
	float marks;
	char grade;
	
	cout<<"Enter student name:"<<endl;
	cin>>studentname;
	cout<<"Enter exam marks:"<<endl;
	cin>>marks;
	
	if(marks>=70 && marks<=100){
		grade='A';
	}
	else if(marks>=60 && marks<=69){
		grade='B';
	}
	else if(marks>=50 && marks<=59){
		grade='C';
	}
	else if(marks>=40 && marks<=49){
		grade='D';
	}
	else{
		grade='E';
	}
	cout<<"Student name:"<<studentname<<endl;
	cout<<"Exam marks:"<<marks<<endl;
	cout<<"Grade:"<<grade<<endl;
	
	return 0;
}