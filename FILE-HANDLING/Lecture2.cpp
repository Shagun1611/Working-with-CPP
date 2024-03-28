// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     string name;
//     cout<<"Enter you name: ";
//     //cin>>name;
//     getline(cin,name);

//     ofstream of("shagun.txt");
//     of<<name;

//     of.close();
//     string n;
//     ifstream in("shagun.txt");
//     // in>>n;
//     getline(in,n);
//     cout<<n;

//     in.close();
//     return 0;

    
// }


// ANOTHER METHOD OF ACCCESSING FILES IN CPP   AND EOF FUNCTION:

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    ofstream off;
    off.open("shagun.txt");
    off<<"My name is shagun sharma\n";
    off<<"I am best in the world\n";
    off<<"I will be successful\n";
    off<<"I will work hard\n";
    off.close();

    ifstream in;
    in.open("shagun.txt");
    string st;
    // in>>st;    // prints single word
    // getline(in,st); // prints single line

    while(in.eof()==0)
    {
        getline(in,st);
        cout<<st;
        cout<<endl;
    }
    // cout<<st;
    in.close();
    return 0;
}