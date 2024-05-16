#include <iostream>
using namespace std;

 int root(int);

  int main()
  {
    int number = 70;
    cout<<&number<<endl;
    cout<<number<<endl;
    cout<<root(number)<<endl;
    cout<<number<<endl;
  }
    int root(int m){
    
        cout <<&m<<endl;
        m *= m;
        return m;
    }











  