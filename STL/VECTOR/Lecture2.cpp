#include<iostream>
#include<vector>
using namespace std;
template<typename T>

void display(vector<T> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<"Displaying vector!!:: ";
        cout<<v[i]<<" ";
    }
}
int main()
{
    //ways to create a vector
    // vector<int> v1;  //0 length vector
    // vector<char>v2(4);  // character vector of 4 length
    // // v2.push_back('A');
    // vector<char>v3(v2);  // vector made from vector 2 of length 4 
    vector<int> v4(6,13);   // vector will print 6 times 13 value


    display(v4);
   
   return 0;
}