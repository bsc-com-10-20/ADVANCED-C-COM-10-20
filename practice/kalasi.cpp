#include <iostream>
 using namespace std;
  

  class cars{
     public:
    void Nissan()
    {
        cout<< "One of the best brands."<<endl;
    }

   void Benz()
   {
     cout <<"This is my dream car.";
   }

  };
  int main(){
      
      cars vee;  //creating an object of the class cars
      // accessing public member functions of the class cars
      vee.Nissan();  
      vee.Benz();
      
    



  }