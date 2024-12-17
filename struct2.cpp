#include<iostream>
using namespace std;
struct student {
    string name[4];
    int age[4], marks[4];
    int average=0;
   
    
};
int main(){
    student s;
    for(int i=0; i<4; i++){
        cout>>"enter your name ";
        cin>>s.name[i];
        cout<<s.name<<" enter your age ";
        cin>>s.age[i];
        cout<<s.name<<" enter your marks  ";
        cin>>s.marks[i];
    
    }
        for (int i = 0; i < 4; i++)
    {
         cout<<s.name[i]<<" ";
         cout<<s.age[i]<<" "<<endl;
         s.average+=s.marks[i];
        
    }
    cout<<s.average/4<<" ";

}