// string is dynamic memory allocation type
// have inbuilt  function
// reverse() string -. TC-> O(n)
#include<iostream>
#include<string>
using namespace std;

int main(){

    // string str = "what";
    // str.reverse(str.begin(),str.end());
    // cout<<"Reversed: "<<str; 

    // substr() => sub string function TC=> O(n)
    //  string str = "Trivendrampuram";
    //  cout<<str.substr(0,4)<<endl;
    
    // + 
    string str01 = "welcome ", str02 = "toVs";
    // here extra copy of string str01 = str01 + str02
    // cout<<str01+=str02;
    // strcat(str01,str02);
    // cout<<str01;

    // char a = 'e';
    // str01.push_back(a);
    // cout<<str01;

    // size() => str.size() , str.length()
    // char ch[20] : strlen(ch)
    // cout<<str01.size()<<str02.length();
    // char a[89] = "abcds";
    // cout<<strlen(a);

    // to_string => convert to int to string or string to num
    // int num = 8947;
    // string str03 = to_string(num);
    // str03 += '6';
    // cout<<str03; // 89476
    // cout<<str03[1];

    
     return 0;
}