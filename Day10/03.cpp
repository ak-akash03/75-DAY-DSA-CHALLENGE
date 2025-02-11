// Static vs Dynamic Allocatioin 

// compilation stage
// exicutaion stage

// stack memory
// heap memory

// vector<int> vec ;
// vec.push_back(0)
// vec.push_back(1)
// vec.push_back(2)

// size -- number of elements 
// capacity   -- number of block


#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);

    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    return 0;
}