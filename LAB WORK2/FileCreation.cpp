#include <iostream> 
#include <fstream>
using namespace std;

int main(){
      
      //create and open a text file
     ofstream MyFile("exampleFile.txt, ios::out | ios::app");

     if(!MyFile.is_open())
         cout << "the file is in use " <<endl;

         //write to file
         MyFile<< "writing to the file....... \n";

     //close the file
     MyFile.close();

     return 0;

}