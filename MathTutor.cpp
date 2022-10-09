//Description: This program can be used as a math tutor for a young student that subtract two numbers.
//LAB: Math Tutor - Random number, if statement
//Course: CIT 120-T1
//Programmer: Christina Trinh
//Professor: Makhene
//Date: 2/18/21
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
    // Heading
    cout << "\t\t\t\t\tDescription: This program can be used as a math tutor for a young student that subtract two numbers." << endl;
    cout << "\t\t\t\t\tLAB: Math Tutor - Random number, if statement" << endl; 
    cout << "\t\t\t\t\tCourse: CIT 120-T1"<< endl;
    cout << "\t\t\t\t\tProgrammer: Christina Trinh" << endl;
    cout << "\t\t\t\t\tProfessor: Makhene" << endl;
    cout << "\t\t\t\t\tDate: 2/18/21" << endl;
    
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 99;
    int num1;
    int num2; 
    int answer, answer1;
    unsigned seed = time(0);
    srand(seed);

    cout << "Solve\n";
    num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    cout << setw(4) << num1 << endl << "- " << num2 << endl << "--------" << endl;
    cin >> answer;
    cin.ignore();
    answer1 = num1 - num2;
    if (answer == answer1)
    cout << "Congratulation! Your got the right answer!\n";
    else 
    cout << "Your value is wrong. The right answer is " << answer1 << ".\n";

    cout << "Press Enter to exit.";
    cin.get();
    return 0;
}