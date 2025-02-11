// // write a function to calculate sum & product of all numbers in an array.

// #include<iostream>
// using namespace std;

// int sumOfArr(int arr[], int size){
//     int sum = 0;
//     for(int i=0;i<size;i++){
//         sum = sum + arr[i];
//     }
//     return sum;
// }

// int main(){
//     int arr[] = {5,9,8,6,3,7};
//     int size = sizeof(arr)/4;

//     int sum = sumOfArr(arr, size);
//     cout<<sum;
//     return 0;
// }




#include<iostream>
using namespace std;

int multii(int arr[], int size){
    int multi = 1;
    for(int i=0;i<size;i++){
        multi = multi * arr[i];
    }

    return multi;
}

int main(){

    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/4;
    int multi = multii(arr, size);
    cout<<"multiplication of all number : "<<multi<<endl;
    return 0;
}