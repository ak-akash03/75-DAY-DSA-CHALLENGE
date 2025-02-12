// pair sum

// return pair in sorted array with target sum.

#include<iostream>
using namespace std;
int main(){

    int arr[] = {2,7,11,15};
    int size = 4;
    int target = 26;

     for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j] == target){
                cout<<"("<<arr[i]<<","<<arr[j]<<")";
            }  
        }
        cout<<endl;
     }

    return 0;
}