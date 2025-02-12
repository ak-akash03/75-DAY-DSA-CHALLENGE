#include<iostream>
using namespace std;
int main(){

    // return pair in sorted array with target sum.

    int arr[] = {2,7,11,15};
    int size = 4;
    int start = 0;
    int end = size-1;
    
    int target = 9;
    while(start < end){
        int pairSum = arr[start]+arr[end];
        if(pairSum > target){
            end--;
        }
        else if(pairSum < target){
            start++;
        }
        else{
            cout<<arr[start]<<" "<<arr[end]<<endl;
            break;
        }
    }

    return 0;
}