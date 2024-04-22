#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare and initialize the array with string elements
    string elements[] = {"C235", "C234", "A345", "C15", "B123", "G3003","B177", "B179"};
    
    // Iterate through each element of the array
    for (const string& element : elements) {
        // Check if the element starts with the letter "B"
        if (element[0] == 'B') {
            // Output the element if it starts with "B"
            cout << element << endl;
        }
    }

    return 0;
}
