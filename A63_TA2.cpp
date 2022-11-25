#include <iostream>
#include<stdio.h>
#include <queue>
using namespace std;
 
class Person {
 
public:
    string fname;
    string PhoneNo;
    int freq;
 
    Person()
    {

    }
    void setAttribute(string name,string Phone)
    {
        fname= name;
        PhoneNo=Phone;
        freq=0;
    }
};
 
// we are doing operator overloading through this
bool operator<(const Person& p1, const Person& p2)
{
 
    // this will return true when second person
    // has greater frequency. Suppose we have p1.frequency=5
    // and p2.frequency=6 then the object which
    // have max height will be at the top(or
    // max priority)
    return p1.freq < p2.freq;
}
 
int main()
{
 
    priority_queue<Person> Q;
 
    int n=10;

    Person p[n];
    p[0].setAttribute("Shivam Baghele","983356637");
    p[1].setAttribute("Rohit bhojwani","889999637");
    p[2].setAttribute("Prathmesh Rajbhoj","783356637");
    p[3].setAttribute("Sahil Chharra","983356637");
    p[4].setAttribute("Kush Manot","889999637");
    p[5].setAttribute("Arpit Thakur","783356637");
    p[6].setAttribute("Bhushan Wanjari","983356637");
    p[7].setAttribute("Shubham Patel","889999637");
    p[8].setAttribute("Saurabh Suchak","889999637");
    p[9].setAttribute("Mihir Chowdhari","783356637");
    

    int stop=1;
    int callnow;
    cout<<"---------------------------------------------------\n";
    cout<<"------------------Contact List---------------------\n";
    cout<<"---------------------------------------------------\n\n";
    

    while(stop)
    {
        cout<<"------------- Whom do you wanna call? -------------- \n";
        cout<<"|||Enter a number to call||| \n1 Shivam Baghele \n2 Rohit bhojwani \n3 Prathmesh Rajbhoj \n4 Sahil Chharra \n5 Kush Manot \n6 Arpit Thakur \n7 Bhushan Wanjari \n8 Shubham Patel \n9 Saurabh Suchak \n10 Mihir Chowdhari \n11 end\n";
        cin>>callnow;
        if(callnow>0 && callnow<=n)
        {
            //each time when we are calling a person its frequency is incremented by 1
            p[callnow-1].freq +=1;
            cout<<"Calling ......"<<p[callnow-1].fname<<"\n\n";
            
        }
        else if(callnow==(n+1))
        {
            stop=0;
        }
        else{
            cout<<"Enter a valid number \n";
        }
    }
 
    for (int i = 0; i < 10; i++) 
    {
        Q.push(p[i]);
    }
    
    cout<<"---------------------------------------------------\n";
    cout<<"---------------------------------------------------\n";
    cout<<"-------------Favroite contact list----------------- \n";
    cout<<"---------------------------------------------------\n";
    
    while (!Q.empty()) {
 
        Person p1=Q.top();
        Q.pop();
        cout<<p1.fname<<" "<<p1.PhoneNo<<" "<<"Frequency :"<<p1.freq<<endl;

    }
    cout<<"---------------------------------------------------\n";
    return 0;
}
