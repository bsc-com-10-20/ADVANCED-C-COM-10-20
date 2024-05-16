#include <iostream>
#include <limits>
using namespace std;
int main() {
    // declaring num to be an integer
    int num;
            //while loop
    while (true) {
        cout << "Please enter an integer value between 5 and 10: ";
        cin >> num;

        if (cin.fail()) {
             // clearing error flags
            cin.clear();
            // discarding invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Sorry, you entered an invalid number, please try again." << endl;
        } else if (num < 5 || num > 10) {
            cout << "You entered "<<num<<"."<<" Please enter number between 5 and 10." <<endl;
        } else {
            cout << "Your input value " <<((num))<< " has been accepted." <<endl;
            break;
        }
    }

    return 0;
}