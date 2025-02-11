// vector functions

// size
// push_back
// pop_back
// front
// back
// at

#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<char> vec = {'A','k','a','s','h'};
    // cout<<"size = "<<vec.size();
    vec.push_back(' ');
    vec.push_back('R');
    vec.push_back('a');
    vec.push_back('t');
    vec.push_back('h');
    vec.push_back('o');
    vec.push_back('d');
    vec.push_back('d');

    vec.pop_back();
    
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.at(0)<<endl;

    return 0;
}