//Description
//This program will calculate from two numbers from the user
//Group C: Christina, Nafissa, Francois, Charlie
//Lab: Math Turtor
//Professor: Makhene
//Date: 4/1/2021

#include<iostream>
using namespace std;

double calculate (double, double);	//prototype of function named calculate
void banner ();
int main ()
{

double num1, num2, result;	// declare variable
 char choice;			// continued declare variable

banner ();

// Menu
 cout << "******************** Menu ******************** \n\n"
  << "OPERATORS: + - * / %\n\n"
  << "**********************************************\n\n";
 cout << "Enter 2 numbers: ";	// tells user to enter first number
 cin >> num1 >> num2;//get the input		
cin.ignore ();

if (cin.fail ())		//check if it's a character
  {
   cout << "Invalid Operands. \n"
<< "Run the program again and enter real numbers or rational numbers. "
<< "Press Enter to exit";
   cin.get ();
  }
  else 
  {
 cout << "Select an operator from the menu: ";	// tell user to select type of operation
 cin >> choice;		// get the choice
 cin.ignore ();

switch (choice)		// list of choice that user could have chosen
  {
  case '+':			//if user chose additions
   result = num1 + num2;	// combine 2 numbers
//displays solution
   cout << "SOLUTION:\n\n------------------------------\n "
<< num1 << " + " << num2 << " = " << result << endl
<< "------------------------------" << "Press Enter to exit. ";
   cin.get ();
   break;			//break from others

case '-':			//if user chose subtraction
   result = num1 - num2;	// subtract 2 numbers
//display solution
   cout << "SOLUTION:\n\n------------------------------\n "
<< num1 << " - " << num2 << " = " << result << endl
<< "------------------------------" << "Press Enter to exit. ";
   cin.get ();
   break;			//take break from others

case '*':			//if user chose multiplication
   result = num1 * num2;	//multiply them
//display solution
   cout << "SOLUTION:\n\n------------------------------\n "
<< num1 << " * " << num2 << " = " << result << endl
<< "------------------------------" << "Press Enter to exit. ";
   cin.get ();
   break;			//take break from others

case '/':			//if user chose division
   if (num2 == 0)		//check if number is 0, if it's 0, then display error message
{
 cout <<
  "Second operand is invalid. Can't divide by 0. Press Enter to exit.";
 cin.get ();
}
   else			//if it's accepted
{
 result = num1 / num2;	//divide 2 numbers
//displays solution
 cout << "SOLUTION:\n\n------------------------------\n "
  << num1 << " / " << num2 << " = " << result << endl
  << "------------------------------" << "Press Enter to exit. ";
 cin.get ();
}
   break;			//take break from others

case '%':			//if user chose remainder
   if (num2 == 0)		//check if second number is 0, if yes, display error message
{
 cout <<
  "Second operand is invalid. Can't divide by 0. Press Enter to exit.";
 cin.get ();
}
   else			//if it's acceptable
{
 result = calculate (num1, num2);	//call the function calculate to solve the remainder and store in variable named result
//display solution
 cout << "SOLUTION:\n\n------------------------------\n "
  << num1 << " % " << num2 << " = " << result << endl
  << "------------------------------\n" << "Press Enter to exit. ";
 cin.get ();
}
   break;			//take break from others

//if chose other options
  default:
   cout << "Choice is invalid. Press Enter to exit.";
   cin.get ();
  }
  }
 return 0;
}

//function header, and parameters
void banner ()
{
//Banner
 cout <<
  "\t\tDescription: This program will calculate from two numbers from the user."
  << endl << "\t\t\t\t\t LAB: Math Tutor" << endl <<
  "\t\t\t\t\tCourse: CIT 120-T1" << endl <<
  "\t\t\tProgrammers: Christina, Nafissa, Francois, Charlie" << endl <<
  "\t\t\t\t\tProfessor: Makhene" << endl << "\t\t\t\t\t  Date: 4/1/21" 
  <<endl <<endl;

}

double calculate (double NUM1, double NUM2)
{
 double remainder;		// local variable declared

if (NUM1 < 0)			// if first number is negative
 remainder = -NUM1;
else				//if first number is positive
 remainder = NUM1;
if (NUM2 < 0)			//if second number is negative
 NUM2 = -NUM2;

while (remainder >= NUM2)	//repeat subtract until remainder is less than second number, that means the rest in the remainder
 remainder = remainder - NUM2;

if (NUM1 < 0)			//one more time, if first number is negative then return the remainder as a negative number
 return -remainder;

return remainder;		//otherwise, return positive
}