#include <iostream>
#include <random>
using namespace std;

int main() {
    // Seed the random number generator
    random_device rd;
    mt19937 gen(rd());

    // Generate a random number between 0 and 11
        uniform_int_distribution<> dis(0, 11);
    int daysUntilExpiration = dis(gen);

    // Output the generated random number
    cout << "Days until expiration: " << daysUntilExpiration <<endl;

    // Checking the expiration status and give the required message using switch statements
    switch (daysUntilExpiration) {
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%!" << endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription expires in " << daysUntilExpiration << " days." <<endl;
            cout << "Renew now and save 10%!" << endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        default:
            cout << "You have an active subscription.";
            break;
    }

    return 0;
}
