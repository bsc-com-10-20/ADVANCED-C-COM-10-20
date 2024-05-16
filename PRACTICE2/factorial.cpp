#include <iostream>
using namespace std;
//defining a function
int fact(int n) {

//base case
if (n ==0 || n == 1)

return 1;
//recursive case
else {
  return n * fact(n - 1);

}
// initializing int num to be 5
int num = 5;
//printing the factorial of 5 
cout<<"Factorial of" <<num << "is: "<< fact(num);

return 0;

}