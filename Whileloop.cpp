#include <iostream>
using namespace std;
int main() {
    int userInput;

    // Prompt the user for an integer value between 5 and 10
    do {
        cout << "Please enter an integer value between 5 and 10: ";
        cin >> userInput;

        // Check if the input is valid
        if (cin.fail() || userInput < 5 || userInput > 10) {
            cin.clear(); // Clear the error flag
            cin.ignore(100, '\n'); // Clear the input buffer
            cout << "Invalid input. Please enter an integer value between 5 and 10." <<endl;
        } else {
            // Output a statement to inform the user that their input value has been accepted
            cout << "Your input value (" << userInput << ") has been accepted." <<endl;
        }
    } while (userInput < 5 || userInput > 10);

    return 0;
}
