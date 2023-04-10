#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
const int defaultpin = 0000;
int attempts = 0;	
int select;float refrence;char option;char Y;char N;int number;float amount;int pin; int c_pin;int new_pin;float balance,counter;string digit;
balance=1000;
cout<<"Main menu";
cout<<"1.Check Balance";
cout<<"2.Reset/Change pin";
cout<<"3.Send";
cin>>select;
if(select==1)
{
	do{
		cout<<"Enter 4-digit PIN";
		cin>>pin;
		attempts++;
		if (pin != defaultpin){
			cout<<"Incorrect PIN. Please try again";
		}
		else if(pin== defaultpin){
			cout<<"Your balance is is 1000";
		}
	}while (pin== defaultpin && attempts <3);
	if (attempts>3){
		cout<<"Maximum attempts reached.";
		cout<<"Existing Program";
	}
	switch(pin){
		break;
	}
}
else if(select==2)
{
	cout<<"Are You Sure You Want To Change Your Pin";
	cout<<"Choose Y/N";
	cin>>option;
	if(option==Y){
		cout<<"Enter New Pin";
		cin>>new_pin;
		pin==new_pin;
		cout<<"Your New Pin Is"<<new_pin;
	}
}
else if(select==3){
	cout<<"Enter Mobile Number";
	cin>>number;
	cout<<"Enter Amount To Transfer";
	cin>>amount;
	cout<<"Transfer"<<amount<<"to"<<number;
	cout<<"Enter Refrence";
	cin>>refrence;
	cout<<"Please enter your PIN:";
	cin>>pin;
	do{
		attempts++;
		if(pin != defaultpin){
		cout<<"Incorrect PIN. Please try again";
		}
		else if(pin== defaultpin){
			cout<<"You have successfully sent"<<amount<<"to"<<number,
			cout<<"Your current balance is"<<balance-amount;
		}
	} while (pin != defaultpin && attempts>3);
	    if(attempts>3){
	    	cout<<"Maximum attempts reached.";
	    	cout<<"Existing Program";
		}
		switch(pin){
			break;
		}
}
	
	return 0;
}
