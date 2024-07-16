#include<iostream>
#include<set>
#include<string>

using namespace std;

int main(){
    set<string> StrSet;

    StrSet.insert("hello string");

    // printing element of set
    StrSet.insert("not i am a Array");
    StrSet.find("hello");

    // count method count number of accurence if element in then return 1 else 0 mean not in set
    cout<<StrSet.count("hello");
    for( string str : StrSet){
        cout<<str<<" ";
    }cout<<endl;
    return 0;
}