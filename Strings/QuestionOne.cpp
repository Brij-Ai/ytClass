// to checking string is anagram

#include<iostream>
#include<vector>
#include<iostream>

using namespace std;

bool anagram(string s1, string s2){
    vector<int> freq(26,0);

    // checking size of strings
    if(s1.length() != s2.length()){
        return false;
    }

    for(int i = 0 ; i < s1.length(); i++){
        freq[s1[i] - 'a'] ++;
        freq[s2[i] - 'a'] --;
    }
    // checking if freq of every character is 0
    for(int i = 0; i < 26; i++){
        if(freq[i] != 0){
            return false;
        }
    }
    return true;
}
int main(){
    string s1, s2;
    cout<<"Enter first String: ";cin>>s1;
    cout<<"Enter second String: ";cin>>s2;

    if(anagram(s1,s2)){
        cout<<"strings is Anagram string";
    }else{
        cout<<"Given string is not Anagram";
    }
    return 0;
}