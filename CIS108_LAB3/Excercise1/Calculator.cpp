#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <cmath>
#include <string>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include "Calculator.h"

using namespace std;
namespace Calculator {

	double result = 0.0;//represents current value
	double MemVal= 0.0;
	char clear;
	double sum;
	double difference;
	double product;
	char moreNum;
	char sOperator;


	// function clearCurrVal()
	//Clears the calculator’s current value.
	char clearVal()
	{
		result = 0.0;
		cout << "Values Cleared!!: "<< result;
		Sleep(2000);
		return system("cls");
	}

	// function add()
	//Adds a number to the calculator’s current value, 
	//and returns the new current value
	double add(double x,double y)
	{
		result = (x + y);
		return  result;
	}

	// function sub()
	//Subtracts a number from the calculator’s current value, 
	//and returns the new current value. 
	double sub(double x, double y)
	{
		result = (x - y);
		return  result;
	}
	// function multi()
	//Multiplies a number to the calculator’s current value, 
	//and returns the new current value
	double multi(double x, double y)
	{
		result = x * y;
		return result;
	}
	// function div() 
	//Divides a number from the calculator’s current value, 
	//and returns the new current value.
	double div(double x, double y)
	{
		result = (x / y);
		return result;
	}
	// function StoreMem() 
	//Store the calculator’s current value in the memory value.
	void setMem(double sResult)
	{
		MemVal = result;
		

	}
	// function recall()
	//Change the calculator’s current value to whatever is in the memory value, and returns the 
	//new current value
	double recall(double x, double y)
	{
		return 0;
	}
	// function clearMem()
	//Clear the memory value.
	double clearMem(double x, double y)
	{
		
			return 0;
		
		
	}
	// function invert()
	//Invert the sign of the calculator’s current value, and returns the new current value. 

	double invert(double x, double y)
	{
		double inv = (x, y);
		if (x < 0 || y < 0)
		{
			inv = abs(inv);
		}
		else
		{
			inv = -(inv);
		}
		return inv;
		
	}
	// function power()
	//Calculates the calculator’s current value to a specific power, and returns the new current value.

	double power(double x, double y)
	{
		result = pow(x,y);
		return result;
	}
	// function exit()
	//Exits calculator.

	char exit()
	{
		
		cout << "Good bye!!";
		Sleep(2000);
		return system("cls");
		
	}
	





}