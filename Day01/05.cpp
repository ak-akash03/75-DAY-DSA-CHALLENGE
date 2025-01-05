// Program to Swap two numbers

#include<iostream>
using namespace std;

int main(){

    int first = 10 ;
    int second = 20 ;
    int temp ;

    cout<<"before swap :"<<endl;
    cout<<"first : "<<first<<endl;
    cout<<"second : "<<second<<endl;

    temp = first;
    first = second;
    second = temp;
    cout<<endl;


    cout<<"after swap : "<<endl;
    cout<<"first : "<<first<<endl;
    cout<<"second : "<<second<<endl;
    


    return 0;
}