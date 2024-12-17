#include<iostream>
using namespace std;
int main(){
    string strs[3] ={"flower","flover","flodesk"};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            char c[10]= 'strs[i]';
            char d[10]= 'strs[j+1]';
            while (c<d)
            {
                if(c==d){
                    continue;
                }
                else{
                    cout<<c;
                    break;
                }
            }
            

        }
        
    }
    

}