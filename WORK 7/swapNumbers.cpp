#include <iostream>
using namespace std;
 void SwapNumbers(int& varA, int& varB);

int main()
{
  int varA = 25;
  int varB = 100;
 
 cout <<"varA before swap: "  << varA <<endl;
 cout <<"varB before swap: " << varB <<endl;

 SwapNumbers( varB, varA);

cout <<"varA after swap: " << varA <<endl;
cout <<"varB after swap: " << varB <<endl;


return 0;


}
void SwapNumbers(int& varA, int& varB)
{
 
    int temp = varA;
    varA = varB;
    varB = temp;
}