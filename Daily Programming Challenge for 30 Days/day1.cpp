/* Question Find Kth largest element in give array */

#include <iostream>
using namespace std;

void kthLargestElement(int arr[],int k,int size){
    //First Sort the array
    int temp;
    for(int i=0;i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"sorted array: ";
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //After Sorting finding the Kth larget element
    int KthElement = arr[size-k];
    cout<<"Kth Largest Element is "<<KthElement;
}

int main(){
    int arr[] = {2,4,100,3,1,45,60,31};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter the value of K it shoud be less than size of array i.e. size="<<size<<endl<<"Enter value of K=";
    cin>>k;
    kthLargestElement(arr,k,size);

    return 0;
}