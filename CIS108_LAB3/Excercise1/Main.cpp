#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <cmath>
#include <string>
#include <vector>
#include "Calculator.h"


using namespace Calculator;
using namespace std;

//double solve(int, int, char);

int main()
{

	


	//clearScr();
	double result = 0;
	char choice;
	char op = ' ';
	string sCharNotDisplayed = "";
	string lVal = "";
	string rVal = "";
	cout << '<';
	
	double num1, num2;



	cout << "This is a simple math calculator\n";
	cout << "Valid operator are: \n1: X to Exit proram\n2: C to Clear calculator\n3: + Addition";
	cout << "\n4: - Subtraction\n5: * Multiplication\n6: / Division\n7: S to tore memory";
	cout << "\n8: M Memory Clear\n9: I Invert sign\n10: ^ Raise to a power\n11: ENTER excute\n12: any number \n";


	do {

		cout << "\nPlease enter a choice:  ";
		choice = char(_getch());

		if (choice != 'C' && choice != 'c' && choice != 'R' && choice != 'r' && choice != 'M' && choice != 'm' && choice != 'S' && choice != 's' && choice != 'I' && choice != 'i')
		{
			cout << choice;
		}
		



		switch (choice)
		{
			//Exit the program
		case 'x':
		case 'X':
			cout << Calculator::exit();
			break;

			//Clear the calculator
		case 'c':
		case 'C':
			cout << Calculator::clearVal();
			break;

			//Addition
		case '+':
			cout << "\nPlease enter numbers (2 sets of numbers) to add : ";
			cin >> num1 >> op >> num2;
			cout << "Sum is: " << Calculator::add(num1, num2) << "\n\n";
			system("pause");
			break;

			//Subtraction
		case '-':
			cout << "\nPlease enter numbers (2 sets of numbers) to subtract : ";
			cin >> num1 >> op >> num2;
			cout << "Difference is: " << Calculator::sub(num1, num2) << "\n\n";
			system("pause");
			break;

			//Multipilcation
		case '*':
			cout << "\nPlease enter numbers (2 sets of numbers) to multiply: ";
			cin >> num1 >> op >> num2;
			cout << "Product is: " << Calculator::multi(num1, num2) << "\n\n";
			system("pause");
			break;

			//Division
		case '/':
			cout << "\nPlease enter numbers (2 sets of numbers) to divide: ";
			cin >> num1 >> op >> num2;
			cout << "Quotient is: " << Calculator::div(num1, num2) << "\n\n";
			system("pause");
			break;

			//Memory Store
		case 'S':
		case 's':
			sCharNotDisplayed = "";
			break;
			//Memory Recall
		case 'R':
		case 'r':
			sCharNotDisplayed = "";
			break;
			//Memory Clear
		case 'M':
		case 'm':

			sCharNotDisplayed = "";
			break;

			//Invert Sign
		case 'I':
		case 'i':
			cout << "\nPlease enter two number to numbers will be negated: ";
			cin >> num1 >> op >> num2;
			cout << "The invert is: " << Calculator::invert(num1, num2) << "\n\n";
			sCharNotDisplayed = "";
			system("pause");
			break;

			//Power function
		case '^':
			cout << "\nPlease enter numbers (2 sets of numbers) to find the power: ";
			cin >> num1 >> op >> num2;
			cout << "The power is: " << Calculator::power(num1, num2) << "\n\n";
			system("pause");
			break;

			//Execute the requested function, and then display the calculator’s current value
		case 'E':
		case 'e':
			break;

		default:
			system("pause");
			return 0;
		}
	} while (choice != 'x' || choice != 'X');
}

