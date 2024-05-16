#include <iostream>
using namespace std;

int main() 
{

/*declaring pointer and initializing it so that it doesnt store a random address*/
int* pPointer = nullptr;

   int integervar =5;
   //assigning pointer to the address of the object
   pPointer = &integervar; 
    
    //output value of integer
    cout<<"integervar: "<<integervar<<endl;
    

    // output the address of the integer
      cout<<"address of the integer: "<<&integervar<<endl;

   //output address of the assigned to pPointer
   cout<<"pPointer: "<<pPointer<<endl;

   //output address of the pointer
   cout<<"address of the pointer: "<<&pPointer;

   return 0;

}