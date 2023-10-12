#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i=0;i<n;i++){
        int minIndex=1;
        for (int i=0;i<n;i++){
            if (arr[j];<arr[minIndex]){
                minIndex=j;
            }
        }
        if (minIndex != 1){
            swap(arr[i],arr[minIndex]);
        }
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Original Array: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    selectionSort(arr ,n);
    cout<<"Sorted Array: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
