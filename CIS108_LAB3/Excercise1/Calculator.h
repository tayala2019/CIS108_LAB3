//Tamishia Ayala
//Date: 01/28/2019
//NOTE to self: Function decalration are functions with no body(function w/parameters and end it(;))


#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <cmath>
#include <conio.h>
#include <string>



namespace Calculator { 

	//double calcCurrVal;
	//double calcMemVal;


	
	// function clearCurrVal(): Clears the calculator’s current value.
	 char clearVal();
	

	// function add()
	//Adds a number to the calculator’s current value, 
	//and returns the new current value
	double add(double x, double y) ;
	

	// function sub()
	//Subtracts a number from the calculator’s current value, 
	//and returns the new current value. 
	double sub(double x, double y);

	// function multi()
	//Multiplies a number to the calculator’s current value, 
	//and returns the new current value
	double multi(double x, double y);


	// function div() 
	//Divides a number from the calculator’s current value, 
	//and returns the new current value.
	double div(double x, double y);


	// function StoreMem() 
	//Store the calculator’s current value in the memory value.
	double setMem();
	

	// function recall()
	//Change the calculator’s current value to whatever is in the memory value, and returns the 
	//new current value
	double recall(double x, double y);
	
	// function clearMem()
	//Clear the memory value.
	double clearMem(double x, double y);
	
	// function invert()
	//Invert the sign of the calculator’s current value, and returns the new current value. 

	double invert(double x, double y);
	
	// function power()
	//Calculates the calculator’s current value to a specific power, and returns the new current value.

	double power(double x, double y);
	// function exit()
	//Exits calculator.



	char exit();

}
