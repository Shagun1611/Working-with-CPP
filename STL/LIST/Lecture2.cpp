#include<iostream>
#include<list>
using namespace std;
void display(list<int> &l1)  //******************displaying the elements of the list**********************//
{
    cout<<"Elements of the list are: ";
    list<int>:: iterator it; 
    for(it=l1.begin(); it!=l1.end();it++)
    {
        cout<<*it<<" ";

    }
    cout<<endl;
}
int main()
{
    // List 1 inserting elements 
    list<int> l1;
    l1.push_back(1);
    l1.push_back(11);
    l1.push_back(111);   //*************adding elements into the list using push_back funuction
    l1.push_back(1111);
    l1.push_back(11111);

    display(l1);

    //list 2
    int n;
    cout<<"Enter the size of the list 2: ";   //************** Taking user input for the list 2;******************//
    cin>>n;
    int element;
    list<int>l2;
    for(int i=0;i<n;i++)
    {
        cin>>element;
        l2.push_front(element);
    }
    display(l2);


    // ************We can sort both the list by just using sort*************************//

    cout<<"Lists after sorting: "<<endl;
    l1.sort();
    l2.sort();
    display(l1);
    display(l2);


    //************************we can merge the list :-*************************//
    cout<<"List after merging: "<<endl;
    l1.merge(l2);
    display(l1);

    //********************removing last element by using pop_back() fuction*************//
    l2.pop_back();


    //********************removing front element by using pop_front() fuction*************//
    l2.pop_front();


    //********************reversing the list********************//
    cout<<"List1 before reversing: "<<endl;
    display(l1);
    cout<<"List1 after reversing: "<<endl;
    l1.reverse();
    display(l1);

    
    //*********************removing specific element from the list****************//
    cout<<"After removing specific element 111: "<<endl;
    l1.remove(111);
    display(l1);

    
   
   return 0;
}