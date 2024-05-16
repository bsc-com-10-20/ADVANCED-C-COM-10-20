#include <iostream>
using namespace std;

  int main()

  {
    //creating a null pointer
    int* pPointer = nullptr;

    int numberArrays[3]= {10, 20, 30};

    //assign the address of the element to pointer 
    pPointer = numberArrays;

    //output the address of the first element
    cout<< "The value of the numbersArrays[0] is: "<<numberArrays<<endl;
    cout << "address of the pointer is: " <<pPointer <<endl;

    //output the value of the first element using pointer and indirection
    cout <<"The value at pointer: "<< *pPointer<<endl;
    
    //The value of the second element
    cout<<"The value of the second element is: "<<++*(pPointer)<< endl;
    
    //assigning the first element to the pointer
    pPointer = numberArrays;

    //output the value of the first element
    cout <<"value at pPointer++ is: "<< *(pPointer++);

    
      
return 0;















  }











  