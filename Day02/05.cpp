#include<iostream>
using namespace std;

int findtargetindex(int arr[],int size, int target){
    for(int i=0; i < size; i++){
        if(target == arr[i]){
            return i;
        }
    }
    return 0;
}

int main(){

    int arr[] = {4,2,7,8,1,2,5};
    int target = 8;
    int size = sizeof(arr);

    cout<<findtargetindex(arr, size, target);

    return 0;
}