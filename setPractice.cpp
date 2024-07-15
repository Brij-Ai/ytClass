#include<set>
#include<iostream>
using namespace std;
// we will see intro of set and its basic operation
int main(){
    // // declartion of set
    set<int> set01;
    // inserting element in the set
    set01.insert(9);
    set01.insert(19);
    set01.insert(7);

    // prenting values of set using for each loop
    cout<<"value: ";
    for(int value:set01){
        cout<<value<<" "; // result 7 9 19
    }cout<<endl;

    // deleting element of set using erase method
    set01.erase(9);
    cout<<"after delete: ";
    for(int value:set01){
        cout<<value<<" "; // result 7 19
    }cout<<endl;

    // creating new and try to insert value on using for loop
    set<int> set02;

    int value;
    cout<<"enter unique value in set :";
    for(int i= 0; i<5; i++ ){
        cin>>value;
        set02.insert(value);
    }
    cout<<"Value of set in Increasing Order:";
    // prenting value of second set 
     for(int value:set02){
        cout<<value<<" "; // result 7 19
    }cout<<endl;

    return 0;
}