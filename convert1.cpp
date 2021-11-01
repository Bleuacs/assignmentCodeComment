//File: 	Slettebak1.cpp
//Name: 	Aaron Slettebak
//Class: 	CSIS 252
//Program: 	assignment 1
//Date: 	8/31/2021


#include <iostream>
#include <limits>
#include <iomanip>
#include <cmath>

using namespace std;

//Program Description
//This program will ask for a number input to choose which
//convertion to do. Either Millimeter to Mickey or Mickey to millimeter.
//It will then ask to the amount to converted. Then print out the
//amount to the converted number. This will go on until the user input
//0 or any letter for the option of convertion.

int main(){
	
	
	float num;
	float input;
	input=3;

	//Keep going until 0 or letter to end the program
	while (input != 0){
		cout << "Enter '1' for Millimeters to Mickeys and '2' for Mickeys to Millimeters," << endl;
		cout << "and Enter '0' or any letter to end the program: ";
		//gets the input
		cin >> input;
	
		//check for failure 
		if(cin.fail()){
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<endl<<"You have entered an invaled input, please re enter an input"<<endl<<endl;
			input=3;
		} else {

			//if the use put 1 for input, Millimeters to Mickeys
			//the program will go to this one
			while (input == 1){
				cout << endl << "Enter the amount of Millimeters: ";	
				//gets the input
				cin >> num;
			
				//check for failure 
				if(cin.fail()){
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"You have entered an invaled input, please re enter an input"<<endl;

				} else {
					//prints out the converted number
					cout << fixed << setprecision(2) << num << "mm is " << num*31.25 << " Mickeys" << endl << endl;

					input=3;
				}	
			}

			//if the use put 2 for input Mickey to Millimeters 
			//the program will go to this one
			while (input == 2){
				cout << endl << "Enter the amount of Mickeys: ";

				//gets the input
				cin >> num;

				//check for failure 
				if(cin.fail()){
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"You have entered an invaled input, please re enter an input"<<endl;

				} else {
					
					//prints out convertion
					cout <<fixed << setprecision(2) << num << " Mickeys is " << num/31.25 << "mm" << endl << endl;
					input=3;
				}
			}
		}
	}
	return 0;
};
