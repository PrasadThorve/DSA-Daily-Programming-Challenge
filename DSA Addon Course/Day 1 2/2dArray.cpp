//Problem- take input from user rows and columns, write 2d array, take elements from user, and write addition of diagonal elements

#include <iostream>
using namespace std;

int main(){
    // int row;
    // int col;
    // cout<<"Enter the size of row";
    // cin>>row;
    // cout<<endl;
    // cout<<"Enter the size of col";
    // cin>>col;

    int arr[3][3];
    for(int i = 0;i<3;i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    for(int i = 0;i<3;i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }



}