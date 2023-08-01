#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1 = "I love my country";
    int size=str1.length();
    // cout<<size;
    for(int i =0;i<size-1;i++){
        if(str1[i]=='a'|| str1[i]=='e'|| str1[i]=='i'|| str1[i]=='o'|| str1[i]=='u'  ){
            cout<<str1[i];
            cout<<endl;
        }
    }
}