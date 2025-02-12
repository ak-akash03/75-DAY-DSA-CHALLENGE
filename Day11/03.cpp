// Mojority Element

#include<iostream>
using namespace std;
int main(){

    int arr[] = {2,2,2,2,3,1,1,1,1};
    int n = sizeof(arr)/4;

    cout<<n<<endl;

    for(int i=0;i<n;i++){
        int me=0;
        for(int j=i;j<n;j++){
            if(arr[i] == arr[j]){
                me++;
            }
        }
        if(me >= n/2){
            cout<<"Mejority Element is : "<<arr[i]<<endl;
        };
    }
    

    return 0;
}