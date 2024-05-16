#include <iostream>
using namespace std;

int main()
{

int firstValue;
int secondValue;

 int* pPointer = nullptr;

 //assign pointer with the address of the first value
 pPointer = &firstValue;
 *pPointer = 520; // indirection

 //assign pointer with the address of the second value

 pPointer = &secondValue;
 *pPointer =560; //indirection

 cout <<"first value is: "<<firstValue<<endl;
 cout<<"second value is: "<<secondValue;


   return 0;







}