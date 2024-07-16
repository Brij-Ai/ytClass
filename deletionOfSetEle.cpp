#include<iostream>
#include<set>
using namespace std;

// in this i will perform delete operation on Set Element
int main(){
    // creating Set
    set<int> _set;
    int size; // size of set element
    cout<<"Enter size of SET: "; cin>>size;
    int value;

    // entering Element of set
    cout<<"Enter the Set Element but Unique Value :";
    for(int i = 1; i <= size; i++){
        cin>>value;
        _set.insert(value);
    } 

    cout<<"Element of set :";
    for (int value:_set)
    {
        cout<<value<<" ";
    }cout<<endl;

    // now we perfing deletion operation on Set element
    int delEle;

    return 0;
}