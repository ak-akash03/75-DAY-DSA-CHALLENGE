#include<iostream>

using namespace std;
int main(){

     // find the smallest number on array

    //  INT_MAX

    int arr[] = {5,3,6,2,1};
    int size = 5;

    int smallest = INT_MAX;

    for(int i=0; i<size; i++){
        if(smallest > arr[i]){
            smallest = arr[i];
        }
    }

    cout<<smallest;
    return 0;
}