/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Reese Stowell
 */
#include <iostream>
#include "std_lib_facilities.h"
class Name_value{
	public:
	int value;
	string name;
};

int main()
{
	Name_value input;
	vector<Name_value> V;
	int i = 0;
	cout << "Please enter a name followed by a number to be added to the vector ";
	while(cin >> input.name >> input.value) {	

		if (input.name == "NoName" && input.value == 0){
            break;
		}
		
		for (i = 0; i < V.size(); i++){
        if(input.name == V[i].name){
			cout << "You have entered a duplicate name the program will now terminate ";
			exit(0);
			}
		}
		
		V.insert(V.end(), input);
		
		cout << "Please enter another name followed by a number to be added to the vector ";
	}
	for (i = 0; i < V.size(); i++){
        cout << V[i].name << " " << V[i].value << "\n";
	}
}
