#include <iostream>
using namespace std;

  int main()
  {
    int x = 5;

    //the value of x is increased before the value x is assigned y
   // hence the value assigned to y is the value of x after being imcreased

   int y = ++x;

   cout <<"x: "<<x<<endl; // x will 6


   cout <<"y: "<< y; //y will be 6

   return 0;








  }