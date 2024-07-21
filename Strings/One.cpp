// string use for store sequence of characters 

// -> objects of a class Std: string in c++

// -> used to represent squence of char

// string stringName = "abcd"

#include<string>
#include<iostream>
using namespace std;

int main(){

    string str = "hello ji kya kar rahe ho";
    cout<<"string : "<<str;
    // input string by user
    string str2;
    cin>>str2;
    cout<<endl;
    cout<<str2;

    // with spaces
    // getline(cin,stringName)

    // based on 0 indexing
    //end => empty char or null

    return 0;
}