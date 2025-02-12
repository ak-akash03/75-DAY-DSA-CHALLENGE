
// Kadane's Algorithms

#include<iostream>-+

#include<vector>
using namespace std;
int main(){

    vector<int> vec = {3,-4,5,4,-1,7,-8};
    // int n = 7;

    int currSum = 0;
    int maxSum = 0;
    
    for(int val : vec){
        currSum = currSum + val;
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }



    cout<<maxSum;

    return 0;
}