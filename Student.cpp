#include<iostream>
using namespace std;
class Student
{
    public:
    int rollno;
    string name;
    string city;
};
int main(){
        Student s1,s2;
        cout<<"Enter your name: ";
        cin>>s1.name;
        cout<<"Enter roll no: ";
        cin>>s1.rollno;
        cout<<"Enter City name: ";
        cin>>s1.city;
        
        cout<<"Enter your name: ";
        cin>>s2.name;
        cout<<"Enter roll no: ";
        cin>>s2.rollno;
        cout<<"Enter City Name: ";
        cin>>s2.city;

        cout<<"\nName: "<<s1.name;
        cout<<"\nRoll no: "<<s1.rollno;
        cout<<"\nCity: "<<s1.city;
        cout<<"\nName: "<<s2.name;
        cout<<"\nRoll no: "<<s2.rollno;
        cout<<"\nCity: "<<s2.city;
return 0;
    }