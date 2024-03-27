// for help you can use:- https://cplusplus.com/reference/vector/vector/

#include<iostream>
#include<vector>
using namespace std;
 
 void display(vector<int> &v)
 {
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
 }
int main()
{
    vector<int> v1;
    int element;
    cout<<"Enter the elememnts of the vector: ";

    for(int i=0;i<8;i++)
    {
        cin>>element;
        v1.push_back(element);// to add elements in the vector
    }
    cout<<endl;
    cout<<"The vector is :";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    v1.pop_back();  // to remove last element of the vector

    cout<<"The vector after poping is :";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    cout<<"Another display type!!!:  ";
    display(v1);
    cout<<endl;
    cout<<"The front element of the vector: "<<v1.front(); //it gives frist element of the vector
    cout<<endl;
    cout<<"The front element of the vector: "<<v1.back();//it gives last element of the vector
    cout<<endl;
    v1.resize(5);  // to resize the size of the vectorr
    cout<<"Size of the vector: "<<v1.size();
    cout<<endl;

    // v1.erase(v1.begin()+2);//removes element 3 position
    v1.erase(v1.begin(),v1.begin()+3);//removes range of element
    cout<<"vector after erasing function: ";
    display(v1);
    cout<<endl;

    //if we need to insert element we need to make an iterator which points towards our vector

    vector<int>:: iterator it=v1.begin();
    v1.insert(it,5666);
    cout<<"vector after inserting: ";
    display(v1);

 // if we want to insert element im the second position of the vector
    // vector<int>:: iterator it=v1.begin();
    // v1.insert(it+1,5666);
    // cout<<"vector after inserting: ";
    // display(v1);

    // if we want to insert the copies of some element in specific position

    // vector<int>:: iterator it=v1.begin();
    v1.insert(it+3,10,5666);
    cout<<"vector after inserting the 10 copies of 56666: ";
    display(v1);

   return 0;
}