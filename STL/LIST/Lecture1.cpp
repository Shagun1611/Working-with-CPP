// use list when we have to delete elements in the middle position or any where
// use array when we want to insert and access element
//if you need any help: - https://cplusplus.com/reference/list/list/
#include<iostream>
#include<list>
using namespace std;

void display(list<int>&l1)
{
    list<int>:: iterator it;   // act as a pointer which points to a elemnet in the list
  
    for( it=l1.begin(); it!=l1.end();it++)
    {
        cout<<*it<<" "; // printing the value to which the iterator is pointing
    }
    cout<<endl;
}
int main()
{
   list<int> l1; // list with 0 length
//    list<int>l2(7); //list wih 7 siize;

l1.push_back(5);
l1.push_back(7);
l1.push_back(1);
l1.push_back(9);
l1.push_back(12);

//to  display the elements int the list
display(l1);

//removing elements from the list
// l1.pop_back();// to remove element from the back
// l1.pop_front();// to remove elements from the front
// l1.remove(9);  // to remove the specific eleemnt from teh list

// for soting the list
l1.sort();

display(l1);

list<int> l2(3);
list<int>:: iterator it1;
it1=l2.begin();
*it1=45;
it1++;
*it1=6;
it1++;
*it1=9;
//sorting list 2
l2.sort();

display(l2);

// merging the two list

l1.merge(l2);
cout<<"List 1 after merging with l2: ";
display(l1);

//reversig the list 
l1.reverse();
cout<<"The list 1 after reversing: ";
display(l1);

   return 0;
}