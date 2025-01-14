//Earnest Scott Lee, IT312, 1-14-25

// DataTypes.cpp : The data types to declare each of the variables is missing.
// Based on the value being stored in the variable and the comments beside it, 
// fill in the data type at the beginning of each line.  Then compile and run 
// program to make sure you selected the correct types.
//
// After you submit your answers, try changing the values stored in the
// variables.  What can you learn about the different data types?
//

#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    // Declare variables with the appropriate data types
    double classAverage = 90.7; // Decimal number
    char letterScore = 'A'; // Single letter
    int testScore = 95; // Whole number value
    float classTestAverage = 88.4f; // Decimal number, notice the 'f' at the end

    enum colorCode {
        Green = 1,
        Yellow = 5,
        Red = 10
    }; 
    colorCode gradebookColor; // Stores list of values
    gradebookColor = Green; // This line assigns the value Green

    bool isStudentPassing = true; // Could be true or false

    // Output the values of the variables
    cout << "The class average is currently "
         << classAverage
         << endl;
    cout << "The class test average was "
         << classTestAverage
         << endl;
    cout << "Your test score was "
         << testScore
         << endl;
    cout << "Your current letter score is "
         << letterScore
         << endl;
    cout << "The color of your gradebook entry is "
         << gradebookColor
         << endl;
    cout << "Are you passing? "
         << boolalpha    // This line allows the word 'true' or 'false' to be printed instead of '0' or '1'
         << isStudentPassing
         << endl;

    return 0;
}