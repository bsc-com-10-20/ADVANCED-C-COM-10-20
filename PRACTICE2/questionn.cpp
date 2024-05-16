#include <iostream>
#include <string>
using namespace std;

int main() {
        //declaring and initializing an array
  string  kay[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
       
       // Calculate the size of the array
    int size = sizeof(kay) / sizeof(kay[0]); 

    // Iterating through each element of the array using for loop
    for (int i = 0; i < size; ++i) {
        // Checking if the current element is beginning with letter 'B'
        if (kay[i][0] == 'B') {
            // Output the element to the console
            cout << kay[i] << endl;
        }
    }

    return 0;
}
