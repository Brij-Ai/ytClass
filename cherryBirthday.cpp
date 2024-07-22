#include<set>
#include<iostream>
using namespace std;

int main (){

    set<string> inviteList;
    int size;
    cout<<"Enter the size of Invite List :"; cin>>size;
    cout<<"Enter the name of Member: ";
    while(size --){
        string name;
        cin>>name;
        inviteList.insert(name);
    }
    cout<<"prenting invite List: ";
    for(string str: inviteList){
        cout<<str<<" ";
    }cout<<endl;
}