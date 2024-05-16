#include <iostream>
using namespace std;


  int main() {

      int jay[6] ={21, 22, 23, 24, 25, 26};
      
          for(int h = 0; h < 6; h++)
        
        cout<<"The value is "<< jay[h]<<" "<<"The address is "<< jay + h <<endl;

        return 0;
  }