#include<iostream>
using namespace std;
int main() 
{
	int marks;
	char grades;
	cout<<"enter a marks"<<endl;
	cin>>marks;
    switch(marks/10) {
		case 10:
		cout<<"A"<<endl;
		break;
		case 9:
		cout<<"B"<<endl;
		break;
		case 8:
		cout<<"C"<<endl;
		break;
		case 7:
		cout<<"D"<<endl;
		break;
		default :
		cout<<"this is default case";
		break;	
	
	}
	return 0;
}
