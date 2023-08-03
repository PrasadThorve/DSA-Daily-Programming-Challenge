/* Questions 
Given a sorted array arr[] and number x, write a function that counts the occurence of x in arr[].
*/

// #include<vector>
#include<iostream>
using namespace std;

void occuranceX(int arr[],int n,int x){
    int occurance=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            occurance++;
        }
    }
    cout<<"Occurance of "<<x<<" is "<<occurance;
}

int main(){
    int arr[] = {1,2,3,3,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter the X = ";
    cin>>x;
    occuranceX(arr,size,x);
    return 0;
}