#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "A word is a maximal";
    int size=s.length();
    // cout<<size;
    bool flag = false;
    int count = 0;
    for(int i=size-1; i>=0; i--){
        if((s[i]>='a'&& s[i]<='z') || (s[i]>='A'&& s[i]<='Z') ){
            count++;
        }
    }
    cout<<count;
}