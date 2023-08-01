#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,8,10,3,4,5,50,34,45};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of array = "<<size<<endl;
    cout<<"Array:";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"reversed array:";
    for(int i = 4;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Sum of elements in the array:";
    int sum =0;
    for(int i=0;i<5;i++){
        sum += arr[i];
    }
    cout<<sum;
    cout<<endl<<"Printing 50 if present in array: ";
    for(int i=0;i<10;i++){
        if(arr[i]==50){
            cout<<"Yes,50 is present in the array";
            
        }
        else{
            cout<<"NO,50 is not present";
        }
        break;
    }
    cout<<"Finding duplicates in the array: ";
    int temp[size];
    int j = 0;
    for(int i = 0; i<size-1; i++){
        if(arr[i] != arr[i+1]){
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[size-1];
    return 0;
}