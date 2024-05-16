#include <iostream>
using namespace std;

   int main() {

       int gees = 64;
       int* pgees = &gees;

       cout <<"The value of gees is "<< gees <<endl;
       cout <<"The address of gees is "<< &gees <<endl;
       cout <<"The address of gees is "<< pgees <<endl;
       cout <<"The value of gees is "<<*pgees;


       return 0;








   }