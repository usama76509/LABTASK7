#include<iostream>
using namespace std;
int main() {
	char op;
	cout<<"enter your operators"<<endl;
	cin>>op;
	int a,b;
	cout<<"enter two numbers"<<endl;
	cin>>a>>b;
	
	switch(op){
		case '+':
		cout<<"result"<<a+b;
		break;
		case '-':
		cout<<"result"<<a-b;
		break;
		case '*':
		cout<<"result"<<a*b;
		break;
		case '/':
		cout<<"result"<<a/b;
		break;
		case '%':
		cout<<"result"<<a%b;
		break;
		default:
		cout<<"this is default case";
		break;	
			
	}
	return 0;
	
}

