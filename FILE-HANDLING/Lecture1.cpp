#include<iostream>
#include<fstream>

/* 
The useful classes for wrorking with files in cpp:-
1. fstreambase
2. ifstream --- derived from fstream
3. ofstream ----derived from fstream
*/

/* File in cpp can opened in two ways: -
1. using constructor of the class(ifstream,ofstream)
2. using the member function open() of the class
*/

using namespace std;
int main()
{
    string st="SHAGUN SHARMA";
    string st2;  
    // opening file using constructor and writing in it   
    // ofstream off("1.txt"); //write operation
    // off<<st;

    //opening a file using constructor and reading it
    ifstream in("1.txt"); //read operation
    // in>>st2;
    getline(in,st2);  
    cout<<st2;

    return 0;

}