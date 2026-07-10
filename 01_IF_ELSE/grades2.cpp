#include <iostream>
using namespace std;

int main() {
    int marks;
    cin >> marks;

    cout << "Your marks are: " << marks << endl;
    cout << "Fetching your grades..." << endl;

    if (marks < 25) {
        cout << "Your grade is F";
    }
    else if (marks >= 25 && marks <= 44) {
        cout << "Your grade is E";
    }
    else if (marks >= 45 && marks <= 49) {
        cout << "Your grade is D";
    }
    else if (marks >= 50 && marks <= 59) {
        cout << "Your grade is C";
    }
    else if (marks >= 60 && marks <= 79) {
        cout << "Your grade is B";
    }
    else {
        cout << "Your grade is A";
    }

    return 0;
}