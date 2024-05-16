#include <iostream>
using namespace std;

int main()
{
  int numbersArray[5];

  int* pPointer = nullptr;

    //assign the address to the first element to the pointer
    pPointer = numbersArray;
     
     *pPointer = 110; // assigning value to the first element

     /*increment the pointer using arithmetic to assign the address
     of the second element to the pointer*/
     pPointer++;
      *pPointer = 120; // assign value to the third element
     // assign the address of the third element to the pointer
 
       //assign the address ot the third element
      pPointer = &numbersArray[2];
       *pPointer = 130; // value of the third element

      /*assign the address of the fourth element to the pointer
      using pointer arithmetic*/
      pPointer = numbersArray + 3;
      *pPointer = 140; //value of fourth element

      /*assign a value to the fifth element using indirection
      and pointer arithmetic*/
      *( pPointer + 4) = 150;
      
      //iterate and out put all the elements in the array

         for(int n = 0; n < 5; n++)
         {
           cout << numbersArray[n] << ", ";

         }
return 0;

     

      


















}