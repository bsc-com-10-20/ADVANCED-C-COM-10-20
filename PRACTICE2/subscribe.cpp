#include <iostream>
#include <random>
using namespace std;


int main() {
    /*Seed the random number generator,
    initializing random number generator */
    random_device rd;
    mt19937 gen(rd());

    // Generate a random number between 0 and 11
    uniform_int_distribution<> dis(0, 11);
    int daysUntilExpiration = dis(gen);

    // Output the generated random number
    cout << "Days until expiration: " << daysUntilExpiration << endl;

    // Checking the expiration status and printing the required message
    if (daysUntilExpiration <= 0) {
        cout << "Your subscription has expired." << endl;
    } else if (daysUntilExpiration <= 1) {
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%!" << endl;
    } else if (daysUntilExpiration <= 5) {
        cout << "Your subscription expires in " << daysUntilExpiration << " days." <<endl;
        cout << "Renew now and save 10%!" << endl;
    } else if (daysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!" <<endl;
    } else {
        cout << "You have an active subscription.";
    }

    return 0;
}
