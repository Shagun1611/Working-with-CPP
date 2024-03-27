#include<iostream>
#include<list>
using namespace std;

void display(list<int> &l)
{
    cout<<"Elements of the list are: ";
    list<int>::iterator itt;
    for(itt=l.begin();itt!=l.end();itt++)
    {
        cout<<*itt<<" ";
    }
    cout<<endl;

}
int main()
{
   list<int>l1(5,100);
   list<int>l2(3,200);

   cout<<"List before swaping: "<<endl;
   cout<<"List1:   ";
   display(l1);
   cout<<"List2:   ";
   display(l2);
   cout<<endl;

   cout<<"List After swaping: "<<endl;
   swap(l1,l2);

   cout<<"List1:   ";
   display(l1);
   cout<<"List2:   ";
   display(l2);
   cout<<endl;
   
   return 0;
}