#include <iostream>
using namespace std;
  
  int main ()
  {
   int name = 65;
   int* pName =&name;
   cout<<name<<endl;
   cout <<pName<<endl;


int* power;
   cout<< power<<endl;

   power = new int;

   *power = 87;
   cout<<power<<endl;
   cout<<*power<<endl;
   delete power;

   return 0; 






  }