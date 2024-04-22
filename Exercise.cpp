#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // initialize the random number generator
    srand(time(0));
    
    // Generate a random number between 0 and 11
    int daysUntilExpiration = rand() % 12;

    // Output  depending on conditions using switch statement
    switch (daysUntilExpiration) {
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%!" << endl;
            break;
       
        case 2:
            cout << "Your subscription expires in " << daysUntilExpiration << " days." << endl;
            cout << "Renew now and save 10%!" << endl;
            break;
       
        case 3:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        default:
            cout << "You have an active subscription." << endl;
            break;
    }

    return 0;
}
