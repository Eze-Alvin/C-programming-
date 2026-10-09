#include<iostream>
using namespace std;
int main(){
	double num1, num2;
	char op;
	
	cout<<"Enter first number:"<<endl;
	cin>>num1;
	cout<<"Enter an operator(+,-,*,/):"<<endl;
	cin>>op;
	cout<<"Enter second number:"<<endl;
	cin>>num2;
	
	switch(op){
		case '+':
			cout<<"Result:"<<num1<<"+"<<num2<<"="<<(num1 + num2)<<endl;
			break;
		case'-':
			cout<<"Result:"<<num1<<"-"<<num2<<"="<<(num1-num2)<<endl;
			break;
		case '*':
			cout<<"Result:"<< num1<<"*"<<num2<<"="<<(num1*num2)<<endl;
            break;
        case '/':
            if (num2 == 0) {
                cout<<"Error:Division by zero is not allowed."<<endl;
            } else {
                cout<<"Result:"<< num1<<"/"<<num2<<" = "<<(num1 / num2)<<endl;
            }
            break;

        default:
            
            cout << "Error: Invalid operator entered." << endl;
            break;
    }

    return 0;
}
	
