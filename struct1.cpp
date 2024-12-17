//Create a structure called "Student" with members name, age, and total marks. Write a C program to input 
//data for two students, display their information, and find the average of total marks.
#include<iostream>
using namespace std;
struct student{
    int age,age2, total_marks, total_marks2;
    char name[100], name2[100];
};
int main(){
    student s;
    
    cout<<"enter first student name  ";
    cin>>s.name;
    cout<<"enter second student name  ";
    cin>>s.name2;

     cout<<"enter "<<s.name<<" age ";
     cin>>s.age;
     cout<<"enter "<<s.name2<<" age ";
     cin>>s.age2;

     cout<<"enter "<<s.name<<" marks ";
     cin>>s.total_marks;
     cout<<"enter "<<s.name2<<" marks ";
     cin>>s.total_marks2;

     cout<<s.name<< " your marks is "<<s.total_marks<<" and your age is "<<s.age<<endl;
     cout<<s.name2<< " your marks is "<<s.total_marks2<<" and your age is "<<s.age2<<endl;
     
     cout<<"average marks is "<<s.total_marks+s.total_marks2/2;



}