// Single Number

// 4,1,2,1,2
// unique number is 4

//  n ^ n = 0
//  n ^ 0 = n

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec = {4,1,4,2,1,2,5};
    int ans = 0;
    for(int val : vec){
        ans = ans ^ val;
    }
    cout<<"Ans : "<<ans<<endl;

    return 0;
}

