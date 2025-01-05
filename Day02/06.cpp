#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){

    int start = 0, end= size-1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}

int main(){

    int arr[] = {4,2,6,4,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"end program : ";

    return 0;
}