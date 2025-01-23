// GPA Calculator
// Name: Scott Lee
// Course: IT312
// Date: 1/21/25
// Assignment: GPA and Honors Calculator
// Description: This program calculates the GPA from four grades and determines if honors are achieved.

#include <iostream>
using namespace std;

int main() {
    // Variables to store grades and GPA
    double grade1, grade2, grade3, grade4, GPA;
    bool summa_cum_laude = false;
    bool magna_cum_laude = false;
    bool cum_laude = false;

    // Input grades
    cout << "Enter grade for course 1 (e.g., 4.0 for A): ";
    cin >> grade1;
    cout << "Enter grade for course 2 (e.g., 4.0 for A): ";
    cin >> grade2;
    cout << "Enter grade for course 3 (e.g., 4.0 for A): ";
    cin >> grade3;
    cout << "Enter grade for course 4 (e.g., 4.0 for A): ";
    cin >> grade4;

    // Calculate GPA
    GPA = (grade1 + grade2 + grade3 + grade4) / 4;

    // Determine honors
    if (GPA >= 3.9) {
        summa_cum_laude = true;
    } else if (GPA >= 3.8) {
        magna_cum_laude = true;
    } else if (GPA >= 3.65) {
        cum_laude = true;
    }

    // Display results
    cout << "Your GPA is " << GPA << "." << endl;
    cout << "Graduating summa cum laude: " << (summa_cum_laude ? "true" : "false") << endl;
    cout << "Graduating magna cum laude: " << (magna_cum_laude ? "true" : "false") << endl;
    cout << "Graduating cum laude: " << (cum_laude ? "true" : "false") << endl;
    cout << "Graduating without honors: " << ((GPA < 3.65) ? "true" : "false") << endl;

    return 0;
}