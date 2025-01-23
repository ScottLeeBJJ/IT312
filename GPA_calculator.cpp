// GPA Calculator
// Name: Scott Lee
// Course: IT312
// Date: 1/21/25
// Assignment: GPA and Honors Calculator
// Description: This program calculates the GPA from four grades and determines if honors are achieved.

#include <iostream>
using namespace std;

// Function to convert percentage grade to GPA
double convertToGPA(int percentage) {
    if (percentage >= 90) {
        return 4.0;
    } else if (percentage >= 80) {
        return 3.0;
    } else if (percentage >= 70) {
        return 2.0;
    } else if (percentage >= 60) {
        return 1.0;
    } else {
        return 0.0;
    }
}

int main() {
    // Variables for grades (percentages) and GPA
    int grade1, grade2, grade3, grade4;
    double GPA1, GPA2, GPA3, GPA4, GPA;
    bool summa_cum_laude = false;
    bool magna_cum_laude = false;
    bool cum_laude = false;

    // Input grades
    cout << "Enter percentage for course 1 (0–100): ";
    cin >> grade1;
    cout << "Enter percentage for course 2 (0–100): ";
    cin >> grade2;
    cout << "Enter percentage for course 3 (0–100): ";
    cin >> grade3;
    cout << "Enter percentage for course 4 (0–100): ";
    cin >> grade4;

    // Convert percentages to GPA
    GPA1 = convertToGPA(grade1);
    GPA2 = convertToGPA(grade2);
    GPA3 = convertToGPA(grade3);
    GPA4 = convertToGPA(grade4);

    // Calculate GPA
    GPA = (GPA1 + GPA2 + GPA3 + GPA4) / 4;

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