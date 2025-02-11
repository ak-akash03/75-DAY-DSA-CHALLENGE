// linear search

#include<iostream>
using namespace std;
int findValue(int arr[], int target){
    for(int i=0;i<sizeof(arr);i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){

    int arr[] = {4,1,5,6,2,7};
    int target = 4;

    int index = findValue(arr, target);
    cout<<"target at index = "<<index;
    return 0;
}