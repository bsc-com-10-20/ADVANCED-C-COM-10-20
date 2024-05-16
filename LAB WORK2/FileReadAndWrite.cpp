#include <iostream>
#include <fstream>
using namespace std;

int main() {

char data [100];

//open a text file in write mode
ofstream outfile;
outfile.open("afile.txt");
cout <<"Writing to the file" << endl;
cout <<"Enter your name: ";
cin.getline(data, 100);

// writing inputtted data into the text file

outfile <<data << endl;

cout  << "Enter your age: ";
cin >> data;
cin.ignore();

// again write the inputted data to the text file

outfile << data << endl;

//close the opened file

outfile.close();

// open the tex file in read mode

ifstream infile;
infile.open("afile.txt");

cout << "Reading from the file" <<endl;
infile >> data;

// write the data at the screen

cout << data << endl;

// again read data from the file and display it

infile >> data;
cout << data << endl;

// close the opened file

infile.close();

return 0;



}