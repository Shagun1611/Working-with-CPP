#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream off;
    off.open("love.txt");
    string name;
    cout<<"Enter the name of the person: ";
    getline(cin,name);
    off<<name<<"\n";
    off<<"I love her very much!!\n";
    off<<"She is very precious to me !!";
    off.close();

    ifstream inn;
    inn.open("love.txt");
    string data;
    while(inn.eof()==0)
    {
        getline(inn,data);
        cout<<data<<endl;;
    }

   
   return 0;
}