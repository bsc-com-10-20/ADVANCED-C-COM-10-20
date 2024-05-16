#include <iostream>
using namespace std;

int main()
{
 int name = 556;
 int *pName;
 pName = &name;
      
      cout<< *pName<<endl;
      cout<< name<<endl;
      cout<< pName<<endl;

   int number = 400;
   int& refNumber = number;
   cout<< number<<endl;
   cout<< refNumber<<endl;

   refNumber = 456;
   cout <<refNumber<<endl;
   cout<< number<<endl;

   number = 200;
   cout<<number<<endl;
   cout<<refNumber<<endl;   
   cout<< &number;


      return 0;
  
    


}