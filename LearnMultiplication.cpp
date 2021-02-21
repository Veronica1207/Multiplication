//Assignment3: LearnMultiplication.cpp
//Driver class for the program that helps to learn multiplication
//
//Veronica Logvinenko, A01208105
//Jan 31st, 2021


#include <iostream>
#include <cstdlib>

using namespace std;

void multiplication(); //function prototype
void correctMessage(); //function prototype
void incorrectMessage(); //function prototype


//function main beginsa program execution
int main() {
	
	cout << "Enter -1 to End." << endl;

	multiplication();

	cout << "\nThat's all for now. Bye." << endl;

	system("pause");

}

//multiplication function
void multiplication()
{
	bool exit = false;  //true if -1 is entered, otherwise fasle
	int digit1;			//randomly generated number 1
	int digit2;			//randomly generated number 2
	int result;			//result of the multiplication
	
	srand(time(0));
	
	//prompt to perform multiplication until exit == false
	while (exit == false) {
		digit1 = (rand() % 10);		//random number from 0 to 9
		digit2 = (rand() % 10);		//random number from 0 to 9

		cout << "How much is " << digit1 << " times " << digit2 << " (-1 to End)? ";

		cin >> result;

		//if the answer is incorrect prompt for a correct answer
		while (result != (digit1 * digit2) && result != -1) {
			incorrectMessage();
			cout << "? ";
			cin >> result;
		}

		//if the answer is correct print correctMessage()
		if (result == (digit1 * digit2)) {
			correctMessage();
		}
		else {
			exit = true;
		}
	}
}


//function to print one of the correct messages
void correctMessage() {

	int randomNumber = (1 + rand() % 4);	//random number from 1 to 4

	switch (randomNumber) {
	case 1:
		cout << "Very good!\n" << endl;
		break;
	case 2:
		cout << "Excellent!\n" << endl;
		break;
	case 3:
		cout << "Nice work!\n" << endl;
		break;
	case 4:
		cout << "Keep up the good work!\n" << endl;
		break;
	default:
		cout << "Somethig went wrong in the correctMessage() switch statement. Please try again.\n" << endl;
	}

}

//function to print one of the incorrect messages
void incorrectMessage() {

	int randomNumber = (1 + rand() % 4);	//random number from 1 to 4

	switch (randomNumber) {
	case 1:
		cout << "No. Please try again." << endl;
		break;
	case 2:
		cout << "Wrong. Try once more." << endl;
		break;
	case 3:
		cout << "Don't give up!" << endl;
		break;
	case 4:
		cout << "No. Keep trying." << endl;
		break;
	default:
		cout << "Somethig went wrong in the incorrectMessage() switch statement. Please try again.\n" << endl;
	}

}