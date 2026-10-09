#include<iostream>
using namespace std;
int main(){
	string studentname;
	int age;
	float score;
	
	cout<<"Enter Student name:"<<endl;
	cin>>studentname;
	cout<<"Enter Student age:"<<endl;
	cin>>age;
	cout<<"Enter exam score:"<<endl;
	cin>>score;
	cout<<"\n======================"<<endl;
	cout<<"Admission Results for:"<<studentname<<endl;
	
	
	
	if(age<18 && score<=50){
		
			cout<<"Decision: Not Admitted-Underage and Low Score";
			
		} 
		else if(age<18){
			
			cout<<"Decision: Not Admitted-Underage";
		}
		else if(score<50){
			cout<<"Decision: Not Admitted-Low Score";
		}
		else{
			cout<<"Decision: Admitted";
	}
	cout<<endl;
	return 0;
	
}