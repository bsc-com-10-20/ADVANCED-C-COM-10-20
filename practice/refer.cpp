#include <iostream>
using namespace std;


  int main() 
   {
       int mada = 960;
       cout<<"value before referencing "<<mada<<endl;
       int& rRizzle = mada;
       
       rRizzle = 1000;
       
       cout<<"value after referencing "<<rRizzle<<endl;
       cout<<&mada<<endl;
       cout<<&rRizzle;


       return 0;



   }
